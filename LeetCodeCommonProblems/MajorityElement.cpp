#include "StringsAndArrays.h"
#include <unordered_map>

/*
* Problem: Majority Element
* Description: Given an array nums of size n, return the majority element.
* Link: https://leetcode.com/problems/majority-element/
*
* Approach: using the Boyer-Moore majority Vote algorithm , having a candidate to keep track of the current most common element and
*			the numbers of votes it has, if current n is equal to candidate, it gains vote, and if not it loses votes, if the count is equal 0
*			the current n becomes the new candidate and so on until a final candidate gets more votes. 
*
* Time complexity: O(n)
*/
int StringsAndArrays::majorityElement(vector<int>& nums) {

	int candidate = 0; 
	int count = 0;

	for (int n : nums) {

		if (count == 0)
			candidate = n;

		if (candidate == n)
			count++;
		else
			count--;
	}

	return candidate;
}

/*
*  Approach: using a hashmap we keep track of the amount of numbers in the arr/vec and if the amount is greater than nums.size() / 2
*			it means the number is the most ofter and its returned(as the problem states the major element appears more than nums.size() / 2 
*			and I must assume it always exist.
*			 
* Time complexity: O(n)
*/
int StringsAndArrays::majorityElementHashMap(vector<int>& nums) {

	unordered_map<int, int> counter;
	
	for (int n : nums) {
		counter[n]++;

		if (counter[n] > (nums.size() / 2))
			return n;
	}

	return -1;
}