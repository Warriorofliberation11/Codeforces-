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
        int maxi=max(a,b),mini=min(a,b);
        if(mini*2>maxi)
        cout<<pow(mini*2,2)<<endl;
        else
        cout<<pow(maxi,2)<<endl;
    }
}