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
        vector<int> arr(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int cnt1=0,cnt2=0;
        int i=0;
        while(i<n)
        {
            if(arr[i]==arr[0])
            cnt1++;
            if(cnt1==k)
            break;
            i++;
        }
        while(i<n)
        {
            if(arr[i]==arr[n-1])
            cnt2++;
            if(cnt2==k)
            break;
            i++;
        }
        if(arr[0]==arr[n-1])
        {
            int total=cnt1+cnt2;
            if(total>=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            if(cnt1==k && cnt2==k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}