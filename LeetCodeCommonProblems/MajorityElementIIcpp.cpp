#include "StringsAndArrays.h"
#include <unordered_map>
#include <set>

/*
* Problem: Majority Element II
* Description: Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
* Link: https://leetcode.com/problems/majority-element-ii/
*
* Approach: using Boyer Moore vote algorith we create variables for two candidates and and their votes, in the first loop we make sure we have two 
*			different candidates that passed the first loop and didn't get kicked down, for the second loop count the votes for each candidate
*			finally we make sure the candidates have enough votes (nums.size()/3) and if so we push them into the vector.
*
* Time complexity: O(n) 
*/
vector<int> StringsAndArrays::majorityElementIIBoyerMoore(vector<int>& nums) {

	int candidate1 = 0;
	int candidate2 = 0;
	int counter1 = 0;
	int counter2 = 0;

	//finding candidates
	for (int n : nums) {

		if (counter1 == 0 && candidate2 != n)
			candidate1 = n;
		
		if (counter2 == 0 && candidate1 != n)
			candidate2 = n;
			
		if (n == candidate1)
			counter1++;
		else if (n == candidate2)
			counter2++;
		else {
			counter1--;
			counter2--;
		}
	}

	//re-counting votes
	counter1 = 0;
	counter2 = 0;
	for (int n : nums)
	{
		if (n == candidate1)
			counter1++;
		else if (n == candidate2)
			counter2++;
	}

	if (counter1 > (nums.size() / 3) && counter2 > (nums.size() / 3))
		return { candidate1, candidate2 };
	else if (counter1 > (nums.size() / 3))
		return { candidate1 };
	else if (counter2 > (nums.size() / 3))
		return { candidate2 };

	else return {};
}

/*
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