#include <iostream>
#include "StringsAndArrays.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	StringsAndArrays arrs;
	vector<int> nums1 = { 0,1,2,2,2,2,2,3,4,4,4 };
	int m = 2;
	vector<int> nums2 = { 1 };
	int n = 1;

	arrs.removeDuplicatesII(nums1);
}

