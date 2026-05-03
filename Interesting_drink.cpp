#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int q;
    cin>>q;
    vector<int> k(q);
    for(int i=0;i<q;i++)
    cin>>k[i];
    int i=n-1,j=q-1;
    vector<int> arr=a;
    vector<int> m=k;
    sort(arr.begin(),arr.end());
    sort(m.begin(),m.end());
    unordered_map<int,int> mp;
    while(i>=0 && j>=0)
    {
        if(arr[i]<=m[j])
        {
            mp[m[j]]=max(mp[m[j]],i+1);
            j--;
        }
        else 
        i--;
    }
    for(int i=0;i<q;i++)
    {
        cout<<mp[k[i]]<<endl;
    }
}