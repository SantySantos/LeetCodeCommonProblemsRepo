#include <iostream>
#include "BegginerProblems.h"
#include <string>
#include <cctype>
/*
* Problem: Second Largest Digit in a String
* Description: Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.
* Link: https://leetcode.com/problems/second-largest-digit-in-a-string/
*
* Approach: first we verift that the char is a digit, then make it rest by '0' char so it converts to int. After, 
*			we keep updating the Largest number to keep track and be able to find the second largest, then we return it. 
* Time complexity: O(n)
*/
int BegginerProblems::secondHighest(string s) {
	
	int LargestNum = -2;
	int secondLargestNum = -1;
	for (char c : s) {

		if (isdigit(c)) {

			c -= '0';
			if (LargestNum == -2) {
				LargestNum = c;
				continue;
			}
			else if (c > LargestNum) {

				secondLargestNum = LargestNum;
				LargestNum = c;

			}
			else if (c > secondLargestNum && c != LargestNum) {
				secondLargestNum = c;
			}
		}
	}

	return secondLargestNum;
}