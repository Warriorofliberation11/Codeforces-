#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    for(char i: s)
    {
        if(i>=65 && i<=90)
        mp[(char)(i+32)]++;
        else 
        mp[i]++;
    }
    if(mp.size()==26)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}