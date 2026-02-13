#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int l=arr[0]-x,r=arr[0]+x,cnt=0;
        for(int i=1;i<n;i++)
        {
            int left=arr[i]-x,right=arr[i]+x;
            if(r<left || right<l)
            {
                l=left;
                r=right;
                cnt++;
            }
            else 
            {
                l=max(l,left);
                r=min(r,right);
            }
        }
        cout<<cnt<<endl;
    }
}