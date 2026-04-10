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
        sort(arr.rbegin(),arr.rend());
        long long ans=0;
        for(int i=0;i<n;i+=2)
        {
            ans+=arr[i];
        }
        cout<<ans<<endl;
    }
}