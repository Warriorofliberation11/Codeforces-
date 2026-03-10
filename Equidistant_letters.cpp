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
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        string str="";
        for(auto it: mp)
        {
            str+=it.first;
            if(it.second==2)
            str+=it.first;    
        }
        cout<<str<<endl;
    }
}