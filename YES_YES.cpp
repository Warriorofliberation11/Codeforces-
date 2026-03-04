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
        unordered_map<char,char> mp;
        mp['Y']='e';
        mp['e']='s';
        mp['s']='Y';
        bool p=true;
        set<char> st={'Y','e','s'};
        if(st.find(s[0])==st.end())
        p=false;
        for(int i=1;i<s.size();i++)
        {
            if(st.find(s[i])==st.end() ||mp[s[i-1]]!=s[i])
            {
                p=false;
                break;
            }
        }
        if(p)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}