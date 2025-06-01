#include "StringsAndArrays.h"
#include "vector"

/*
* Problem: Merge Sorted Array
* Description: Merge nums1 and nums2 into a single array sorted in non-decreasing order.
* Link: https://leetcode.com/problems/merge-sorted-array/
*
* Approach: using 3 pointers,adding from the last element of the vector nums1 the biggest between the elemets of nums1 and nums2 that need to be 
			arranged and then moving backwards.
*
* Time complexity: O(m + n)
*/
void StringsAndArrays::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

	int n1 = m - 1;
	int n2 = n - 1;
	int lastN = n + m - 1;

	if (m == 0) {
		nums1 = nums2;
		return;
	}

	while (n2 >= 0) {

		if (n1 >= 0) {

			if (nums1[n1] < nums2[n2])
			{
				nums1[lastN] = nums2[n2];
				lastN--;
				n2--;
			}

			else {
				nums1[lastN] = nums1[n1];
				lastN--;
				n1--;
			}
		}
		else {
			nums1[lastN] = nums2[n2];
			lastN--;
			n2--;
		}
	
	}
}