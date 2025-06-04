#include "StringsAndArrays.h"
#include <iostream>
#include "vector"

int StringsAndArrays::removeDuplicatesII(vector<int>& nums) {

	int l = 0;

	for (int r = 0; r < nums.size(); r++) {

		if (l < 2 || nums[r] != nums[l - 2]) {

			nums[l] = nums[r];
			l++;
		}
	}

	return l;

	/*
	
		int l = 0;

for (int r = 0; r < nums.size(); r++) {

	if (l >= 2) {
		if (nums[l - 2] == nums[l]) {

			if (nums[r] != nums[l])
			{
				nums[l] = nums[r];
			}			
			else
				continue;
		}	
		else {
			nums[l] = nums[r];
		}
	}
	
	l++;
}

return l;*/
	/*
	int l = 0;
	unordered_map<int, int> counter;

	for (int r = 0; r < nums.size(); r++) {

		counter[nums[l]]++;

		if (counter[nums[l]] > 2) {

			if (nums[l] != nums[r]) {

				int temp = nums[l];
				nums[l] = nums[r];
				nums[r] = temp;
			}
			else
				continue;
		}

		l++;

	}
	return l;
	*/


}