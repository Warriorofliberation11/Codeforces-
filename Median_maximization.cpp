#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int a=ceil((1.0*n)/2);
        cout<<s/(n-a+1)<<endl;
    }
}