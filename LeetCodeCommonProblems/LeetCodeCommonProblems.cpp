#include <iostream>
#include "StringsAndArrays/StringsAndArrays.h"
#include "TwoPointers/TwoPointers.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	StringsAndArrays bas;

	vector <int> prices = {2,4,1};
	
	int  result = bas.maxProfit(prices);

	cout << result << endl;

	return 0;
}

