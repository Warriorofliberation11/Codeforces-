#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=l && arr[i]<=r && k>=arr[i])
            {
                k-=arr[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}