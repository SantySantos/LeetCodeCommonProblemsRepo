#include <string>
#include <iostream>
#include "TwoPointers.h"

/*
* Problem: Is Subsequence
* Description: Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
* Link:https://leetcode.com/problems/is-subsequence/
*
* Approach: Using two pointers, one placed at the beggining of s and another at the beggining of t, we iterate throught the string of t,
*           if the characters of s and t match, we move forward s char and t keep going though, else we dont move until s finds a match from t,
*           it iterated through all the array and any match wasnt found, we return false, else if we found a match to all characters of s, we return true. 
*
* Time complexity: O(n)
*/
bool TwoPointers::isSubsequence(string s, string t) {

    if (s.empty())
        return true;
    
    if (s.length()>t.length())
        return false;
    
    int r = 0;

    for (int l = 0; l < t.length(); ++l)
    {
        char subTemp = s[r];

        if (subTemp == t[l])
        {
            r++;
            
            if (r == s.length())
                return true;
        }
    }

    return false;
}



