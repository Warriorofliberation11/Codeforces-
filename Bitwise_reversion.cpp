#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        bool check=true;
        if(((x&y)&~z)!=0)
        check=false;
        if(((y&z)&~x)!=0)
        check=false;
        if(((x&z)&~y)!=0)
        check=false;
        cout<<(check?"YES":"NO")<<endl;
    }
}