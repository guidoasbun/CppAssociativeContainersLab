//
// Created by Guido Asbun on 10/11/21.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <set>
#include <map>

using namespace std;

//Write the definition of the function clusters() that passes an STL multiset of type int and returns the number of clusters.
//
//Example:
//Given the set {1, 2, 2, 3, 4, 4} => clusters 2,2/4,4 => return value is 2
//Given the set {2, 2, 4, 6, 6, 6, 6, 7, 8, 9, 9, 9} => clusters 2,2/6,6,6,6/9,9,9 => return value is 3
//
//Consider the case when the set is empty, to avoid creating any variables unnecessarily.
int clusters(const multiset<int>& mSet)
{
    if (mSet.empty())
        return 0;
    int clusters{0};
    set<int> visited;

    for (const int& elem : mSet)
    {
        bool stop = false;
        if(visited.find(elem) != visited.end())
            stop = false;
        else
        {
            visited.insert(elem);
            if (mSet.count(elem) > 1)
                clusters++;
        }
    }
    return clusters;
}

//Write the definition of the function sameKeyValue() that passes a non-empty STL multimap of type int and returns true if all the numbers in the values appear also in the keys.
//
//Example:
//
//(3,3), (4,4), (5,1), (6,2), (7,3), (7,5) => false
//The values are 3, 4, 1, 2, 3, and 5, but 1 and 2 are not keys.
//
//(1,2), (2,6), (4,2), (4,6), (6,4) => true
//The values are 2, 6, 2, 6, and 4, and all of them are also keys.
bool sameKeyValue(const multimap<int, int>& mMap)
{
    auto iter = mMap.begin();

    while (iter != mMap.end())
    {
        if(mMap.find(iter->second) == mMap.end())
            return false;
        ++iter;
    }

    return true;
}

//Write the definition of the function tenMultiplesOf() that passes an empty STL set of type int and an int. The function populates the set with 10 multiples of the given integer, except for the values that end with the integer itself.
//
//Example:
//2 => {4, 6, 8, 10, 14, 16, 18, 20, 24, 26}
//3 => {6, 9, 12, 15, 18, 21, 24, 27, 30, 36}
//
//You may use function pow() for your calculations. The header <cmath> is already included.
void tenMultiplesOf(set<int>& intSet, int integer)
{
    int intSetCount{0};
    int num{1};
    while (intSetCount < 10)
    {
        int multiple = integer * num;
        {
            if ((multiple % 10) != integer)
            {
                intSet.insert(multiple);
                intSetCount++;
            }
            num++;
        }
    }
}

#endif //CPPASSOCIATIVECONTAINERSLAB_FUNCTIONS_H
