#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        unordered_map<char,int> mp;
        mp[s[0]]++;
        mp[s[1]]++;
        mp[t[0]]++;
        mp[t[1]]++;
        cout<<mp.size()-1<<endl;
    }
}