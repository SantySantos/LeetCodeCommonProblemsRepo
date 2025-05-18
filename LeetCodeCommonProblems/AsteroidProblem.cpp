#include "IntermediateProblems.h"
#include <vector>
#include <deque>

using namespace std;

/*
* Problem: Asteroid Collision
* Description: Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. 
*				If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.
* Link: https://leetcode.com/problems/asteroid-collision/
*
* Approach: we check the if the current asteroid can collide with the one after it, if so, we delete the one closest to 0.
*			After, we check again with the same asteroid if it can collide with the one after it, and so on. If the cant collide,
*			we move to the next asteroid. 
* 
* Time complexity: O(N^2)
*/
vector<int> IntermediateProblems::asteroidCollision(vector<int>& asteroids) {

	int i = 0;

	while (i != asteroids.size() - 1) {
		if ((i + 1) == asteroids.size() + 1) {
			break;
		}
		if (asteroids[i] > 0 && asteroids[i + 1] < 0) {

			if ((asteroids[i+1] * -1) > asteroids[i]) {
				asteroids.erase(asteroids.begin() + (i));
		
			}
			else if ((asteroids[i+1] * -1) < asteroids[i]) {
				asteroids.erase(asteroids.begin() + (i+1));
				
			}
			else {
				asteroids.erase(asteroids.begin() + (i + 1));
				asteroids.erase(asteroids.begin() + i);
				
			}
			if (i > 0) i--;
		}
		
		else
			i++;
	}
	
	return asteroids;

	
}