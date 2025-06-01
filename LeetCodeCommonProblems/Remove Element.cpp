#include "StringsAndArrays.h"
#include "vector"

/*
* Problem: Remove Element
* Description: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed
* Link: https://leetcode.com/problems/remove-element/
*
* Approach: using two pointers, at the beggining of the loop and the end, we check if the right pointer is val, so we move to the left. When the left pointer is 
*			equal to val and the right one isnt, we put the element in l to be equal at the element to r as we are already sure it isnt equal to val. and we do
*			this until r is less than l, which means we have checked neccesary values. we return r + 1 which means the last element we check and swapped efectively. 
*
* Time complexity: O(n)
*/
int StringsAndArrays::removeElement(vector<int>& nums, int val) {

	int l = 0, r = nums.size() - 1;

	while (l <= r) {

		if (nums[r] == val) {
			r--;
			continue;
		}

		if (nums[l] == val) {

			nums[l] = nums[r];
			l++;
			r--;
			continue;
		}

		l++;		
	}

	return r + 1;	
}