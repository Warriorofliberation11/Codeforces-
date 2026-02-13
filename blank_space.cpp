#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,curr=0,maxi=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==0)
            curr++;
            else
            curr=0;
            maxi=max(maxi,curr);
        }
        cout<<maxi<<endl;
    }
}