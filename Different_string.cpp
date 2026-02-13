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
        for(char i:s)
        {
            mp[i]++;
        }
        if(mp.size()==1)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            string p="";
            int i=0;
            while(s[i]==s[0])
            {
                i++;
            }
            p+=s[i];
            for(int j=0;j<s.size();j++)
            {
                if(i!=j)
                p+=s[j];
            }
            cout<<p<<endl;
        }
    }
}