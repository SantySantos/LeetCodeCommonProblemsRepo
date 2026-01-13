#include <iostream>
#include "HashMap.h"
#include <unordered_map>
#include <string>
#include <algorithm>

/*
* Problem: Valid Anagram
* Description: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
* Link: https://leetcode.com/problems/valid-anagram/
*
* Approach: using Hashmap frequency count, add each element in s to the sM map, and then increment the value of the key to keep track of the amount,
*			same for the tM, if the two maps match they are effectively an Anagram. 
*
* Time complexity: O(n)
*/
bool HashMap::isAnagramHashmap(string s, string t) {

	if (s.length() != t.length()) return false;

	unordered_map<char, int> sM, tM;

	for (char c : s) 
		sM[c]++;
	
	for (char c : t) 
		tM[c]++;
	  
	return sM == tM;
}

/*
* Approach: sorting s and t, if they are the same string they are effectively an anagram, otherwise no.
*
* Time complexity: O(n log n)
*/
bool HashMap::isAnagram(string s, string t) {

	if (s.length() != t.length()) return false;

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	return s == t;
}