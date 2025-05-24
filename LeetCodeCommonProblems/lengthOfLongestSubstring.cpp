#include <string>
#include <unordered_map> 
#include "IntermediateProblems.h"

/*
* Problem: Longest Substring Without Repeating Characters
* Description: Given a string s, find the length of the longest substring without duplicate characters.
* Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
*
* Approach: using the sliding window technique, we use a pointer to the left and one to the right of the longest substring,
* and a hasmap to check the chars we have seen and their index. then traversing to the array,we follow by checking if it has
* been seen before and if their position is greater than the position of the pointer l. if so, we increase the pointer l. if not 
* it means we can keep moving forward with the substring and update the max length. Finally wwe add the char and the index to the 
* map to keep track of the character substrings.
*
* Time complexity: O(N)
* 
* special thanks to Algo Engine : https://www.youtube.com/watch?v=pY2dYa1m2VM for the help finding a solution to this problem and 
* help me understant the sliding window technique!
*/
int IntermediateProblems::lengthOfLongestSubstring(string s) {

	int l = 0;
	unordered_map<char, int> seen;
	int maxLength = 0;

	for (int r = 0; r < s.length(); r++) {

		char ch = s[r];

		if (seen.find(ch) != seen.end() && seen[ch] >= l)
			l = seen[ch] + 1;
		else
			maxLength = max(maxLength, r - l + 1);
			
		seen[ch] = r;
	}

	return maxLength;
}
