#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        map<int,int>mp;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            mp[b[i]]++;
        }
        bool p=true;
        for(int i=1;i<=k;i++)
        {
            if(mp[i]==0)
            {
                p=false;
                break;
            }
        }
        if(!p)
        cout<<"NO"<<endl;
        else
        {
            set<int> st1,st2;
            for(int i=0;i<n;i++)
            {
                if(a[i]<=k)
                st1.insert(a[i]);
            }
            for(int i=0;i<m;i++)
            {
                if(b[i]<=k)
                st2.insert(b[i]);
            }
            if(st1.size()>=k/2 && st2.size()>=k/2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}