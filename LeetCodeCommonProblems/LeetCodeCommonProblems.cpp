#include <iostream>
#include "BegginerProblems.h"
#include "IntermediateProblems.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
    BegginerProblems myProblem;       
    IntermediateProblems myIProblems;
    vector<int> asteroids = { 8, -8 };

    myIProblems.asteroidCollision(asteroids);
}

