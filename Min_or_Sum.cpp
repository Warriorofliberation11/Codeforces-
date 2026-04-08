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
        int val=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            val=val|a;
        }
        cout<<val<<endl;
    }
}