#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> mp;
    for(char it: s)
    mp[it]++;
    string str="";
    for(auto it:mp)
    {
        if(it.second%k!=0)
        {
            cout<<-1;
            return 0;
        }
        while(it.second>0)
        {
            str+=it.first;
            it.second-=k;
        }
    }
    string result="";
    while(k--)
    result+=str;
    cout<<result;
}