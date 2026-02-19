#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,maxi=0;
        cin>>n>>q;
        vector<int> a(n),b(n),arr(n);
        vector<long long> ans;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            maxi=max(maxi,max(a[i],b[i]));
            if(i<n-1)
            arr[i]=arr[i+1]+maxi;
            else
            arr[i]=maxi;
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            if(r-1==n-1)
            ans.push_back(arr[l-1]);
            else
            ans.push_back(arr[l-1]-arr[r]);
        }
        for(int i: ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}