#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int curr=1;
        string s;
        cin>>s;
        int ans=0;
        for(char it:s)
        {
            int a=it-'0';
            if(a==curr)
            ans++;
            else
            {
                if(a==0 || curr==0)
                ans+=(10-max(a,curr));
                else
                ans+=abs(curr-a);
                curr=a;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}