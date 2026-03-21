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
        if(x>=y || x>=4 || (x==2 && y==3))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}