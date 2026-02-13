#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(k%2LL==1 || n%2LL==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}