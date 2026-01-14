#pragma once
#include "vector"
#include <string>

using namespace std;

class HashMap {

public:
	//Two Sum
	vector<int> twoSum(vector<int>& nums, int target);

	//Valid Anagram
	bool isAnagram(string s, string t);
	bool isAnagramHashmap(string s, string t);

	//Ranson note
	bool canConstruct(string ransomNote, string magazine);
};