#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(char &i:s)
        {
            mp[i]++;
        }
        int p=0,ans=0;
        for(auto it: mp)
        {
            if(it.second>1)
            p++;
            else
            ans++;
        }
        cout<<p+ans/2<<endl;
    }
}