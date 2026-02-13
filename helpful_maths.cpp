#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> g;
    for(int i=0;i<s.size();i+=2)
    {
        g.push_back(s[i]);
    }
    sort(g.begin(),g.end());
    for(int i=0,k=0;i<s.size();i+=2,k++)
    {
        s[i]=g[k];
    }
    cout<<s;
}