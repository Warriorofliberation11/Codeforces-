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
        string s;
        cin>>s;
        map<char,int> mp;
        mp[s[0]]++;
        if(s[0]!=s[n-1])
        mp[s[n-1]]++;
        bool k=true;
        for(int i=1;i<n-1;i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>1)
            {
                cout<<"YES"<<endl;
                k=!k;
                break;
            }
        }
        if(k)
        cout<<"NO"<<endl;
    }
}