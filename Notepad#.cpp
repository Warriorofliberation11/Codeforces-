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
        map<pair<char,char>,int>mp;
        bool k=false;
        for(int i=1;i<n;i++)
        {
            if(mp.count({s[i],s[i-1]}) && (mp[{s[i],s[i-1]}]+1!=i))
            {
                k=true;
                break;
            } 
            else if(mp.count({s[i],s[i-1]})==0)
            mp[{s[i],s[i-1]}]=i;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}