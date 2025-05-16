#include <iostream>
#include "BegginerProblems.h"
#include <string>

using namespace std;

/*
* Problem: Add Digits
* Description: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
* Link: https://leetcode.com/problems/add-digits/
*
* Approach: converting the num into a string, then looping each char and adding the sum to a num using ASCII '0', which will make the char always return its integer,
*			then validating if its a number less than 10. If not, repeat the loop again
*
* Time complexity: O(log n)^2)
*/
int BegginerProblems::addDigits(int num) {

	bool isValid = false;
	int result = 0;
	while (!isValid) {
	
		string numString = to_string(num);
		
		for (int c : numString) {
			
			result += c - '0';
		}
		
		if (result > 9) {
			num = result;
			result = 0;
			continue;
		}
		else
			isValid = true;
	}
	
	return result;
}	
	


