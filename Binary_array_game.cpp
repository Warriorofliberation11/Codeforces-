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
        int first,last,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i==0)
            first=a;
            else if(i==n-1)
            last=a;
            else
            mini=min(mini,a);
        }
        if(first==0 && last==0)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
    }
}