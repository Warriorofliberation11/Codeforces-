#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=3)
        cout<<1<<endl;
        else
        cout<<max(n/2,(n-1)/2)<<endl;
    }
}