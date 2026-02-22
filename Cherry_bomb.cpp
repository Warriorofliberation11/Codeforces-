#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,mini=INT_MAX,maxi=INT_MIN;
        cin>>n>>k;
        vector<int> a(n),b(n);
        long long x=-1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool p=true;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]!=-1)
            {   
                long long newv=(long long)a[i]+b[i];
                if(x!=newv)
                {
                    if(x==-1)
                    x=newv;
                    else
                    p=false;
                }
            }
            else
            {
                mini=min(mini,a[i]);
                maxi=max(maxi,a[i]);
            }
        }
        long long op=(long long)mini+k;
        if(!p || (x!=-1 && (maxi>x || op<x)))
        cout<<0<<endl;
        else if(x==-1)
        cout<<k-(maxi-mini)+1<<endl;
        else
        cout<<1<<endl;
    }
}