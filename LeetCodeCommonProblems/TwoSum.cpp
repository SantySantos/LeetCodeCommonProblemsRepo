#include <iostream>
#include "BegginerProblems.h"
#include <unordered_map>
#include <vector>

/*
* Problem: Two Sum
* Description: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
* Link: https://leetcode.com/problems/two-sum/
*
* Approach: first we get the number that we are looking for to add so that added with the current num we get the target num, if the map has it,
*		we have found the solution, if not, we add the current position value as key and index as value, an we do that looping throught the vector
*		and checking each time if we have have found X (or missing value to find target). 
*
* Time complexity: O(N)
*/
vector<int> BegginerProblems::twoSum(vector<int>& nums, int target) {

	unordered_map<int, int> seen;
	vector<int> selectedValues;
	
	for (int r = 0; r < nums.size(); ++r) {

		int in = nums[r];
		int x = target - in;

		if (seen.count(x)) {
			
			selectedValues.push_back(r);
			selectedValues.push_back(seen[x]);
			break;
		}			

		seen[in] = r;
	}
	return selectedValues;
}


