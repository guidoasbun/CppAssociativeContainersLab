//
// Created by Guido Asbun on 10/12/21.
//

#include <iostream>
#include <set>
#include <map>

using namespace std;

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