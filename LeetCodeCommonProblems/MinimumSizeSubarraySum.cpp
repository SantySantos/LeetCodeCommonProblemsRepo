#include <iostream>
#include "IntermediateProblems.h"
#include <vector>

int IntermediateProblems::minSubArrayLen(int target, vector<int>& nums) {

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