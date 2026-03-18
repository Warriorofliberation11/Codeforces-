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
        string s;
        cin>>s;
        unordered_map<int,char> mp;
        bool k=true;
        for(int i=0;i<n;i++)
        {
            if(mp.count(arr[i]))
            {
                if(mp[arr[i]]!=s[i])
                {
                    k=false;
                    break;
                }
            }
            else
            mp[arr[i]]=s[i];
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}