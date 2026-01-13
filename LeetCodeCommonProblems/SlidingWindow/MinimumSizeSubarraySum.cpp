#include <iostream>
#include "SlidingWindow.h"
#include <vector>

/*
* Problem: Minimum Size Subarray Sum
* Description: Given an array of positive integers nums and a positive integer target, 
*			return the minimal length of a subarray whose sum is greater than or equal to target. 
*			If there is no such subarray, return 0 instead.
* Link: https://leetcode.com/problems/minimum-size-subarray-sum/
*
* Approach: using the sliding window technique we move the left and right pointer to adjust the currentSum variable and try to 
get the smallest length that sums up the target. If we traverse all the vector and the currentSum never hitted the target we return 0;
* 
*
* Time complexity: O(N)
*
*/
int SlidingWindow::minSubArrayLen(int target, vector<int>& nums) {

	int l = 0;

	int minLenght = INT_MAX;

	int currentSum = 0;

	bool hasInteracted = false;

	for (int r = 0; r <= nums.size(); r++) {

		if (currentSum >= target) 
		{
			minLenght = min(minLenght, r - l);
			hasInteracted = true;
			currentSum -= nums[l];
			l++;
			r--;
			continue;
		}
		else if(r < nums.size())
			currentSum += nums[r];	
	}

	if (!hasInteracted)
		return 0;

	return minLenght;
}