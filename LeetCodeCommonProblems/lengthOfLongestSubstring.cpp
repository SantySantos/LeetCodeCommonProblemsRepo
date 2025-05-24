#include <string>
#include "IntermediateProblems.h"

int IntermediateProblems::lengthOfLongestSubstring(string s) {
	//anviaj
	int i = 0;
	int j = 1;
	int traversal = i;
	int size = 0;
	string longestsSub = "";
	if (s == "")
		return 0;

	while (j < s.length()) {

		if (s[j] != s[j + 1] && s[i] != s[j]) {
			j++;
		}
		else {
			j++;
			i++;
			if (s.size() - i > size)
				size = s.size() - i;
		}
	}

	return j - i + 1;


	/*
	* string longestSubstring = string(1, s[0]);
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
	*/

}
