#include <iostream>
#include "StringsAndArrays.h"

/*
* Problem: Length of Last Word
* Description: Given a string s consisting of words and spaces, return the length of the last word in the string.
* Link: https://leetcode.com/problems/length-of-last-word/
*
* Approach: 
*
* Time complexity: O(n)
*/
int StringsAndArrays::lengthOfLastWord(string s)
{
    int size = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
            if (size > 0 && isblank(s[i]))
                break;
        
            if (!isblank(s[i]))
                size++;
    }

    return size;
}
