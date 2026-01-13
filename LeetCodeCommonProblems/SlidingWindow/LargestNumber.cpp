#include <vector>
#include "SlidingWindow.h"
#include <string>
#include <iostream>

using namespace std;


/*
* Problem: Largest Number
* Description: Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
* Link: https://leetcode.com/problems/largest-number/
*
* Approach: using the lexographical comparison.  
*
* Time complexity:
*/
string SlidingWindow::largestNumber(vector<int>& nums) {

	vector<string> stringNums;

	//we convert the values of nums to string and add them into the new vect.
	for (int n : nums) {
		stringNums.push_back(to_string(n));
		cout << n;
	}
		


	return ".";
}