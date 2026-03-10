#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> c(n);
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            c[i]={a[i],val};
        }
        sort(c.begin(),c.end(),[](pair<int,int>&a,pair<int,int>&b)
        {
            if(a.first==b.first)
            return a.second>b.second;
            return a.first<b.first;
        });
        int i=0;
        while(i<n && k>=c[i].first)
        {
            k+=c[i].second;
            i++;
        }
        cout<<k<<endl;
    }
}