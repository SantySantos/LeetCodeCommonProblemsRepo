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

    vector<int> nums = { 2,3,1,2,4,3 };
    int target = 7;

    int num = myIProblems.minSubArrayLen(target, nums);
    
    cout << num << endl;
}

