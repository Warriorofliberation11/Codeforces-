#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int> arr(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            if(mp[arr[i]]==2)
            cnt++;
        }
        int i=0;
        while(cnt>0)
        {
            mp[arr[i]]--;
            if(mp[arr[i]]==1)
            cnt--;
            i++;
        }
        cout<<i<<endl;
    }
}