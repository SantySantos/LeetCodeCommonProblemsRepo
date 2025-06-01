#include <iostream>
#include "StringsAndArrays.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	StringsAndArrays arrs;
	vector<int> nums1 = { 2, 0 };
	int m = 1;
	vector<int> nums2 = { 1 };
	int n = 1;

	arrs.merge(nums1, m, nums2, n);
}

