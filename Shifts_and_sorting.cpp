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
        long long ones=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            ones++;
            else
            {
                if(ones>0)
                ans+=ones+1;
            }
        }
        cout<<ans<<endl;
    }
}