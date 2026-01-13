#include <iostream>
#include "StringsAndArrays/StringsAndArrays.h"
#include "TwoPointers/TwoPointers.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	TwoPointers isSubs;

	bool result = isSubs.isSubsequence("aza", "abzba");

	cout << result << endl;

	return 0;
}

