#include <iostream>
#include <ostream>

#include "HashMap.h"
#include <unordered_map>

/*
* Problem: Ransom Note
* Description: Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
* Link:https://leetcode.com/problems/ransom-note/
*
* Approach: We register all our chars from magazine and its quantity in the map, then, looping though the ransomNote, we validate that first,
*           our map has the char of the ransomNote, and second, that it has more than 0 available, if so, we return true, else we return false .
*
* Time complexity: O(n^2)
*/
bool HashMap::canConstruct(string ransomNote, string magazine)
{
    unordered_map<char, int> hashmap;

    for (char c: magazine)
        hashmap[c]++;

    for (char c: ransomNote)
    {
        if (hashmap.find(c) == hashmap.end() || hashmap[c] == 0)
        {
            return false;
        }
        
        hashmap[c]--;
    }
    return true;
}
