#include "Functions.h"
#include <iostream>
#include <set>
#include <map>

using namespace std;

void printSet(const set<int>& aSet);

int main()
{

    multiset<int> myMSet1 = {1, 2, 2, 3, 4, 4};
    multiset<int> myMSet2 = {2, 2, 4, 6, 6, 6, 6, 7, 8, 9, 9, 9};

    cout << clusters(myMSet1) << endl;
    cout << clusters(myMSet2) << endl;


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

    set<int> set2;
    set<int> set3;

    tenMultiplesOf(set2, 2);
    tenMultiplesOf(set3, 3);


    printSet(set2);
    printSet(set3);


    return 0;
}


void printSet(const set<int>& aSet)
{
    for (auto elem : aSet)
        cout << elem << " ";

    cout << endl;
}

