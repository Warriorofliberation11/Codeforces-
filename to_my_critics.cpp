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
        int maxi=max(a+b,max(a+c,b+c));
        if(maxi>=10)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}