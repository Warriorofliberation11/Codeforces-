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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        reverse(arr.begin()+1,arr.end());
        int mini=arr[0],maxi=arr[0],ans=0;
        for(int i=1;i<n;i++)
        {
            maxi=max(arr[i],maxi);
            mini=min(arr[i],mini);
            ans+=maxi-mini;
        }
        cout<<ans<<endl;
    }
}