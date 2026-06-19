#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a;
        cin>>x>>y>>a;
        int sum=x+y;
        a=a%sum;
        if(a<x)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}