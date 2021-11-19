#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x;
    vector<int> arr;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        arr.push_back(y);
    }

    for (int i = x-1; i > -1; i--)
        cout << arr[i]<<" ";
    return 0;
}
