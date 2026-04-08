#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int px,py;
        cin>>px>>py;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(char i: s)
        {
            mp[i]++;
        }
        if((px<0 && mp['L']<abs(px)) || (px>0 && mp['R']<px) || (py<0 && mp['D']<abs(py)) || (py>0 && mp['U']<py))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}