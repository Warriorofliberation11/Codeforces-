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
        int m=max(x,y);
        if(x==y)
        cout<<m*2<<endl;
        else
        cout<<m*2-1<<endl;
    }
}