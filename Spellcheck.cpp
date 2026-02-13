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
        if(n!=5)
        cout<<"NO"<<endl;
        else
        {
            bool k=true;
            set<char> st={'T','i','m','u','r'};
            map<char,int> mp;
            for(int i=0;i<n;i++)
            {
                mp[s[i]]++;
                if(mp[s[i]]>1 || st.find(s[i])==st.end())
                {
                    k=false;
                    break;
                }
            }
            if(k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}