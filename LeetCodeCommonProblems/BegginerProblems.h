#pragma once
#include "vector"
#include <string>

using namespace std;

class BegginerProblems {

public:

	//Reverse an array.
	void reverseString(vector<char>& s);
	 
	//check if palindrome.
	bool isPalindrome(string s);
	bool isPalindromeUsingStackAndQueue(string s);

	//AddDigits
	int addDigits(int num);

};
