#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=max(a,max(b,c));
        if(a+b+c==2*x)
        cout<<"YES"<<endl;
        else
        cout<<"No"<<endl;
    }
}