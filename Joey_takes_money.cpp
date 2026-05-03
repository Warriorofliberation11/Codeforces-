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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            arr[i]=arr[i]*arr[i-1];
            arr[i-1]=1;
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        cout<<sum*2022LL<<endl;
    }
}