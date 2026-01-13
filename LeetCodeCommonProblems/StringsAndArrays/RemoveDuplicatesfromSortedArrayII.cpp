#include "StringsAndArrays.h"
#include <iostream>
#include "vector"

/*
* Problem: Remove Duplicates from Sorted Array II
* Description: Remove some duplicates in-place such that each unique element appears at most twice.
* Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
*
* Approach: using 2 pointers, we check wether l is less than two before checking nums[l -2] as a safe condition, and if nums[r] 
*			is different than nums[l - 2] it means we can re write the element in nums[l], and so we do, increasing also l. 
*
* Time complexity: O(n)
*/
int StringsAndArrays::removeDuplicatesII(vector<int>& nums) {

	int l = 0;

	for (int r = 0; r < nums.size(); r++) {

		if (l < 2 || nums[r] != nums[l - 2]) {

			nums[l] = nums[r];
			l++;
		}
	}

	return l;
}