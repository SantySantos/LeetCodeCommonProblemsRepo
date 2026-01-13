#include <string>
#include <iostream>
#include <cctype>
#include <stack>
#include <queue>
#include "TwoPointers.h"

using namespace std;

/*
* Problem: Valid Palindrome
* Description: Given a string, after removing all non-alphanumeric characters, check if the string reads the same forward and backward.
* Link: https://leetcode.com/problems/valid-palindrome/
*
* Approach: two pointer were placed in the string, one at the start, other at the beggining, then, after making sure that the value at the end and the value at the end are not
*			start are alphanumeric values, we check if they are the same char, this is done until the middle of the string, if they all match, it means its palindrome.
*
* Time complexity: O(n)/2
*/
bool TwoPointers::isPalindrome(string s) {

	int end = s.length() - 1;
	int start = 0;

	while (start < end) {

		if (!isalnum(s[start])) 
		{
			start++;
			continue;
		}

		if (!isalnum(s[end])) {

			end--;
			continue;
		}


		if (tolower(s[start]) != tolower(s[end])) 
			return false;
		else {
			start++;
			end--;
		}	
		
	}

	return true;

}


/*
* Approach: using stack and queue, we add alphanum lower characters to it, and afterwards we check if the top of the stack is the same for each char, if so, return true, else return false
*
* Time complexity: O(N^2)
*/
bool TwoPointers::isPalindromeUsingStackAndQueue(string s) {

	stack<char> myStack;
	queue<char> myQueue;

	for (char c : s) {

		if (isalnum(c)) {

			myStack.push(tolower(c));
			myQueue.push(tolower(c));
		}
	}

	while (!myStack.empty() || !myQueue.empty()) {

		if (myStack.top() != myQueue.front())
			return false;
		
		myStack.pop();
		myQueue.pop();
	}
	return true;
}