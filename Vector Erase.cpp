#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int N, a, b,c;
	vector<int> arr;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}


	cin >> c;
	arr.erase(arr.begin() + (c-1));
	N--;



	cin >> a;
	cin>>b;
	int temp = b;
	for (a; a < temp; a++)
	{
		arr.erase(arr.begin() + (b-2));
		N--;
		b--;
	}

	cout << N;
	cout << endl;
	for (int i = 0; i < N; i++)
		cout << arr[i]<<" ";
}

