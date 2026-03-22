#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long sum=0,mini=INT_MAX;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i!=0)
            sum+=abs(arr[i]-arr[i-1]);
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            mini=min(mini,sum-abs(arr[i]-arr[i+1]));
            else if(i==n-1)
            mini=min(mini,sum-abs(arr[i-1]-arr[i]));
            else
            mini=min(mini,sum-(abs(arr[i]-arr[i-1])+abs(arr[i]-arr[i+1]))+abs(arr[i-1]-arr[i+1]));
        }
        cout<<mini<<endl;
    }
}