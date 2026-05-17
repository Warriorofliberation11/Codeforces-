#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            maxi=max(arr[i],maxi);
            if(i%2==1)
            arr[i]=maxi;
        }
        long long cnt=0;
        for(int i=1;i<n;i+=2)
        {
            if(arr[i]<=arr[i-1])
            {
                cnt+=arr[i-1]-arr[i]+1;
                arr[i-1]=arr[i]-1;
            }
            if(i+1<n && arr[i]<=arr[i+1])
            {
                cnt+=arr[i+1]-arr[i]+1;
                arr[i+1]=arr[i]-1;
            }
        }
        cout<<cnt<<endl;
    }
}