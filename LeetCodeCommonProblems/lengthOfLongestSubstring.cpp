#include <string>
#include "IntermediateProblems.h"

int IntermediateProblems::lengthOfLongestSubstring(string s) {
	//pwwkew
	string longestSubstring = string(1, s[0]);
	int longestSub = 0; 
	int j = 0;

	for (int i = 1; i <= s.length(); i++) {

		for (j = 0; j <= longestSubstring.length(); j++) {
			
			if (s[i] == longestSubstring[j]) {

				if (longestSubstring.size() > longestSub) {
					longestSub = longestSubstring.size();
				}

				longestSubstring = "";

				if (s[i - 1] != s[i]) {
					longestSubstring += s[i - 1];
				}

				break;
			}															
		}
		
		j = 0;
		longestSubstring += s[i];
	}
	
	return longestSub;
}
