#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]==1)
            ans=2;
        }
        cout<<ans<<endl;
    }
}