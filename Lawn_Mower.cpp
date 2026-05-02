#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        cout<<(n/w)*(w-1)+(n%w)<<endl;
    }
}