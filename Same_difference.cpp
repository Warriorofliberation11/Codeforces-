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
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(char i: s)
        {
            mp[i]++;
        }
        cout<<n-mp[s[n-1]]<<endl;
    }
}