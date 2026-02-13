#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int app=(y+1)/2;
        int rem=abs(app*15-y*4);
        if(rem<x)
        app+=(x-rem+14)/15;
        cout<<app<<endl;
    }
}