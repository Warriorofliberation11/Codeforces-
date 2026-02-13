#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> dup=arr;
    sort(dup.begin(),dup.end());
    if(dup[0]==dup[n-1] || dup==arr)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<int>result;
    for(int i=0;i<n;i++)
    {
        if(dup[i]!=arr[i])
        result.push_back(arr[i]);
    }
    cout<<"YES"<<endl;
    cout<<result.size()<<endl;
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        solve();
    }
}