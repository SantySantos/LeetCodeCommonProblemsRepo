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

    vector<int> nums = { 10, 2 };
    cout <<  myIProblems.largestNumber(nums);
}

