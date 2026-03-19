#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string k="";
        cin>>n;
        int a=(n+3)/4,f=n-a;
        while(f>0)
        {
            k+='9';
            f--;
        }
        while(a>0)
        {
            k+='8';
            a--;
        }
        cout<<k<<endl;
    }
}