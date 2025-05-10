#include <vector>
#include "BegginerProblems.h"
using namespace std;

/*
* Problem: Reverse string
* Description: Given an array of characters, reverse the array in-place.
* Link: https://leetcode.com/problems/reverse-string/
*  
* Approach: two pointer were placed in the array, one at the start, other at the beggining, then the value at the start swaps with the value at the end,
*			the start pointer increases and the end pointer decreases, this is done until start is equal or greater than end.
* 
* Time complexity: O(n)/2			
*/
void BegginerProblems::reverseString(vector<char>& s) {

	int start = 0;
	int end = s.size() - 1;

	while (start < end){

		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;		

	}
}