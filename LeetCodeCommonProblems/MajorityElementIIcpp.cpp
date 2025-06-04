#include "StringsAndArrays.h"
#include <unordered_map>
#include <set>

/*
* Problem: Majority Element II
* Description: Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
* Link: https://leetcode.com/problems/majority-element-ii/
*
* Approach: keepting track of the amount of elements in the arr by checking if they appear more than (nums.size() / 3), if so
*			we add it to a set to avoid repetition, and after converting the set to a vector to return it. The problem here 
*			relies in the space complexity. 
*
* Time complexity: O(n log n)
*/
vector<int> StringsAndArrays::majorityElementII(vector<int>& nums) {

	unordered_map<int, int> counter;
	set<int> uniqueElements;

	for (int n : nums) {
		
		counter[n]++;

		if (counter[n] > (nums.size() / 3)) 
			uniqueElements.insert(n);

	}
	vector<int> majorElements(uniqueElements.begin(), uniqueElements.end());

	return majorElements;
}