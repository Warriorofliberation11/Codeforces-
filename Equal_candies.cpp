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
        int mini=INT_MAX,res=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mini=min(mini,arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            res+=(arr[i]-mini);
        }
        cout<<res<<endl;
    }
}