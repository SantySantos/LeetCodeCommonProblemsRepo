#pragma once
#include "vector"
#include <string>

using namespace std;

class SlidingWindow {

public:

	//arrange the numbers such that they form the largest number.
	string largestNumber(vector<int>& nums);


	//Longest Substring Without Repeating Characters
	int lengthOfLongestSubstring(string s);

	//Minimum Size Subarray Sum
	int minSubArrayLen(int target, vector<int>& nums);



};
