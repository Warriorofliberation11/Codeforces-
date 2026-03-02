#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,odd=0;
        cin>>n>>k;
        int start=max(1,n-k+1);
        odd=(n+1)/2-(start)/2;
        if(odd%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}