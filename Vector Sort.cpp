#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    vector<int> a;


    for (int i = 0; i < size; i++)
    {
        int count;
        cin >> count;
        a.push_back(count);
    }

    sort(a.begin(), a.end());


    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
