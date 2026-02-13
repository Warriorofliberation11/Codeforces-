#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        long long maxi=max(a,max(b,c));
        n-=(3*maxi-(a+b+c));
        if(n<0 || n%3!=0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}