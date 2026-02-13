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
        int l=0;
        int cnt=0;
        while(l<n)
        {
            int r=l+1;
            while(r<n && arr[r]==arr[l])
            {
                r++;
            }
            r--;
            if((l==0 || arr[l-1]>arr[l]) && (r==n-1 || arr[r]<arr[r+1]))
            cnt++;
            l=r+1;
        }
        if(cnt==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}