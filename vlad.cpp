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
        for(char it:s)
        mp[it]++;
        if(mp['A']>mp['B'])
        cout<<'A'<<endl;
        else
        cout<<'B'<<endl;
    }
}