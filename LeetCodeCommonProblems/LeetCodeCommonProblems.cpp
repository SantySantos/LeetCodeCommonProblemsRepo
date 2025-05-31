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
    
    string s = "rat";
    string t = "car";

    myProblem.isAnagram(s, t);
}

