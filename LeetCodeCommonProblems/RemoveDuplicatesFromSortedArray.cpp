#include "StringsAndArrays.h"
#include <iostream>
#include "vector"
#include <unordered_map>

int StringsAndArrays::removeDuplicates(vector<int>& nums) {

	unordered_map<int, int> seen;

	for (int i = 0; i < nums.size(); i++) {

		if (seen.count(nums[i])) {

			nums[i] = -1;
		}
		else
			seen[nums[i]] = i;
	}

	for (int c : nums)
		std::cout << c << ", ";

	return 0;
}