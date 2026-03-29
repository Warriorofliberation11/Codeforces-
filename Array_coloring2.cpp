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
        unordered_map<int,char> mp;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i%2==0)
            mp[arr[i]]='b';
            else
            mp[arr[i]]='r';
        }
        sort(arr.begin(),arr.end());
        bool k=true;
        for(int i=1;i<n;i++)
        {
            if(mp[arr[i]]==mp[arr[i-1]])
            {
                k=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(k)
        cout<<"YES"<<endl;
    }
}