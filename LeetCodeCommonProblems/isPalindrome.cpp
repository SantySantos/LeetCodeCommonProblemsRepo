#include <string>
#include <iostream>
#include <cctype>
#include "BegginerProblems.h"

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

bool BegginerProblems::isPalindrome(string s) {
	
	int end = s.length() - 1;
	int start = 0;

	while (start < end) {

		if (isalpha(s[start]) || isdigit(s[start])) {

			if (isalpha(s[end]) || isdigit(s[end])) {

				if (tolower(s[start]) != tolower(s[end])) 
					return false;
										
				else {
					start++;
					end--;
				}					
			}
			else 
				end--;			
		}
		else 
			start++;		
	}

	return true;

}