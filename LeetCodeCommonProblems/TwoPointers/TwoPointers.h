#pragma once
#include <string>

using namespace std;

class TwoPointers {

public:
	//check if palindrome.
	bool isPalindrome(string s);
	bool isPalindromeUsingStackAndQueue(string s);

	//is Subsequence
	bool isSubsequence(string s, string t);
};