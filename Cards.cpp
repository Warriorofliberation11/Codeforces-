#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int one=mp['n'],zero=mp['z'];
    while(one--)
    {
        cout<<'1'<<" ";
    }
    while(zero--)
    {
        cout<<'0'<<" ";
    }
}