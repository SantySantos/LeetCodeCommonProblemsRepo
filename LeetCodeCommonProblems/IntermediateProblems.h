#pragma once
#include "vector"
#include <string>

using namespace std;

class IntermediateProblems {

public:

	//arrange the numbers such that they form the largest number.
	string largestNumber(vector<int>& nums);

	//Asteroid Problem
	vector<int> asteroidCollision(vector<int>& asteroids);

	//Longest Substring Without Repeating Characters
	int lengthOfLongestSubstring(string s);
};
