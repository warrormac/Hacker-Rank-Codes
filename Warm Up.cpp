#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {

    int size;
    cin >> size;
    set<int> a;

    for (int i = 0; i < size; i++)
    {
        int count;
        cin >> count;
        a.insert(count);
    }

    set<int>::iterator itr = a.find(3);
    cout << *itr;

    return 0;
}



