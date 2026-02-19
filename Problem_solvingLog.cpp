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
        unordered_map<char,int> mp;
        string s;
        cin>>s;
        for(char i:s)
        mp[i]++;
        for(char ch='A';ch<='Z';ch++)
        {
            if(mp[ch]!=0 && mp[ch]>=(ch-'A'+1))
            cnt++;
        }
        cout<<cnt<<endl;
    }
}