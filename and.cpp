#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p = 1 << (31 - __builtin_clz(n));
        cout << p - 1 << endl;
    }
}