#include <iostream>
#include "BegginerProblems.h"
#include <unordered_map>
#include <string>
#include <algorithm>

/*
* Problem: Valid Anagram
* Description: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
* Link: https://leetcode.com/problems/valid-anagram/
*
* Approach:  sorting s and t, if they are the same string they are effectively an anagram, otherwise no.
*
* Time complexity: O(n log n)
*/
bool BegginerProblems::isAnagram(string s, string t) {

	if (s.length() != t.length()) return false;

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	return s == t;
}