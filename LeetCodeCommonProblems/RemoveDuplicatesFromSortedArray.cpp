#include "StringsAndArrays.h"
#include <iostream>
#include "vector"

/*
* Problem: Remove Duplicates from Sorted Array
* Description: Remove the duplicates in-place such that each unique element appears only once.
* Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*
* Approach: using 2 pointers, we swap the elements of the left pointer +1 with the one of the right pointer if they are different, 
*			making sure they are sorted and keeping them in an increasing order. 
*
* Time complexity: O(n)
*/
int StringsAndArrays::removeDuplicates(vector<int>& nums) {

	int l  = 0;

	for (int r = 0; r < nums.size(); r++) {

		if (nums[r] != nums[l])
			nums[++l] = nums[r];
			
	}
	return l + 1;
}