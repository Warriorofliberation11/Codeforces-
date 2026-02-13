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
        map<char,int> mp1,mp2;
        for(char i: s)
        {
            mp1[i]++;
        }
        int ans=0;
        for(char i:s)
        {
            mp2[i]++;
            mp1[i]--;
            if(mp1[i]==0)
            mp1.erase(i);
            ans=max(ans,(int)(mp1.size()+mp2.size()));
        }
        cout<<ans<<endl;;
    }
}