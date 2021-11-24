#include <iostream>
#include <string>
using namespace std;


int main()
{
    string a, b,c;

    cin >> a;
    cin >> b;

    cout << a.size() <<" " << b.size()<< endl;
    
    c = a + b;
    cout << c<<endl;

    
    for (int i = c.size()-2; i > 0; i--)
        cout << c[i];
    
    cout << " "<< c[0] <<c[c.size()-1];
}
