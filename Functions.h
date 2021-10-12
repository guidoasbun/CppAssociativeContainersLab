//
// Created by Rodrigo Asbun on 10/11/21.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <set>
#include <map>

using namespace std;

int clusters(const multiset<int>& mSet)
{
    int clusters{0};

    if (!mSet.empty())
    {
        int temp = *mSet.begin();
        int count = 0;
        for (auto iter = mSet.begin(); iter != mSet.end(); ++iter)
        {

            if(*iter == *iter++)
            {
                count ++;
            }
            else
            {

            }
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

#endif //CPPASSOCIATIVECONTAINERSLAB_FUNCTIONS_H
