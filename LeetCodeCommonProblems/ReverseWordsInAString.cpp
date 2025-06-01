#include <iostream>
#include <stack>
#include "StringsAndArrays.h"
#include <string>

string StringsAndArrays::reverseWords(string s) {

	stack<string> words;
	string reverseWord = "";

	for (char c : s) {

		if (c != ' ')
		{
			reverseWord += c;
		}
		else if (c == ' ') {
			words.push(reverseWord);
			reverseWord = "";
		}		
	}

	return reverseWord;

}
