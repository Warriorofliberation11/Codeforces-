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
        string s,t;
        cin>>s>>t;
        if(s.size()!=t.size())
        cout<<"NO"<<endl;
        else
        {
            unordered_map<char,int> mp;
            for(char i:s)
            mp[i]++;
            for(char i:t)
            {
                mp[i]--;
                if(mp[i]==0)
                mp.erase(i);
            }
            if(mp.size()!=0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
}