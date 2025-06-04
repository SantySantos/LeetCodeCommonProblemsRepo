#include <iostream>
#include "StringsAndArrays.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	StringsAndArrays arrs;
	vector<int> nums1 = { 2,1,1,3,1,4,5,6 };
	int m = 2;
	vector<int> nums2 = { 1 };
	int n = 1;

	arrs.majorityElementIIBoyerMoore(nums1);
}

