#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i+=2)
    { 
        ans+=abs(arr[i]-arr[i-1]);
    }
    cout<<ans<<endl;
}