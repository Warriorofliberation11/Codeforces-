#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b)
        cout<<a<<endl;
        else if(a*2<b)
        cout<<0<<endl;
        else
        cout<<2*a-b<<endl;
    }   
}