#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> newarr(n);
    newarr[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        if(newarr[i-1]+arr[i]>=k)
        newarr[i]=arr[i];
        else
        newarr[i]=k-newarr[i-1];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=(newarr[i]-arr[i]);
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<newarr[i]<<" ";
    }
    cout<<endl;
}