#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mini1=INT_MAX,mini2=INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            mini2=min(mini2,a);
            else
            mini1=min(mini1,a);
        }
        if(mini1==INT_MAX || mini2==INT_MAX)
        cout<<"YES"<<endl;
        else
        {
            if(mini2<mini1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
}