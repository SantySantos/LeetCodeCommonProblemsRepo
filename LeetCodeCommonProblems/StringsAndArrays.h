#pragma once
#include "vector"
#include <string>

using namespace std;

class StringsAndArrays {

public:

	//Reverse an array.
	void reverseString(vector<char>& s);
	 
	//Second Largest Digit in a String
	int secondHighest(string s);
	
	//Reverse Words in a String
	string reverseWords(string s);

	//Merge Sorted Array
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
};
