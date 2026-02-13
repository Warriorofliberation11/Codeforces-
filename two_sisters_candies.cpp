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
        int b=n/2,a=n-b;
        if(a==b)
        cout<<b-1<<endl;
        else
        cout<<b<<endl;
    }
}