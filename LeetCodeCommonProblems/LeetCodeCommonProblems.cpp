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

    vector<int> myvect = { -3,4,3,90 };

    myProblem.twoSum(myvect, 0);
}

