#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,str1,str2;
        cin>>a>>b;
        int l = lcm(a.size(), b.size());
        string A, B;
        while ((int)A.size() < l) 
        A += a;
        while ((int)B.size() < l) 
        B += b;
        if (A == B) 
        cout << A << endl;
        else 
        cout << -1 << endl;
    }
}