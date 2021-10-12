#include "Functions.h"
#include <iostream>
#include <set>
#include <map>

using namespace std;



int main()
{

    multiset<int> myMSet1 = {2, 2, 4, 6, 6, 6, 6, 7, 8, 9, 9, 9};
    multimap<int, int> multiMap1;
    multiMap1.insert(pair<int, int>(3,3));
    multiMap1.insert(pair<int, int>(4,4));
    multiMap1.insert(pair<int, int>(5,1));
    multiMap1.insert(pair<int, int>(6,2));
    multiMap1.insert(pair<int, int>(7,3));
    multiMap1.insert(pair<int, int>(7,5));
    multimap<int, int> multiMap2;
    multiMap2.insert(pair<int, int>(1,1));
    multiMap2.insert(pair<int, int>(2,6));
    multiMap2.insert(pair<int, int>(4,2));
    multiMap2.insert(pair<int, int>(4,6));
    multiMap2.insert(pair<int, int>(6,4));

    cout << sameKeyValue(multiMap1) << endl;
    cout << sameKeyValue(multiMap2) << endl;

//    auto iter = multiMap1.begin();
//    cout << iter->first << endl;



    return 0;
}