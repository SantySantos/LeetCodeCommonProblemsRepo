#include <iostream>
#include "StringsAndArrays.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	StringsAndArrays arrs;
	vector<int> nums1 = { 0,1,2,2,3,0,4,2 };
	int m = 2;
	vector<int> nums2 = { 1 };
	int n = 1;

	arrs.removeElement(nums1, m);
}

