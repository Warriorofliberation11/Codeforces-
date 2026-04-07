#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int p;
        cin>>p;
        int val=arr[p]^1;
        int left=0,cnt=0,right=0;
        for(int i=1;i<p;i++)
        {
            if(arr[i]==val)
            cnt++;
            else
            {
                if(cnt>0)
                left++;
                cnt=0;
            }
        }
        if(cnt>0)
        left++;
        cnt=0;
        for(int i=n;i>p;i--)
        {
            if(arr[i]==val)
            cnt++;
            else
            {
                if(cnt>0)
                right++;
                cnt=0;
            }
        }
        if(cnt>0)
        right++;
        cout<<max(left,right)*2<<endl;
    }
}