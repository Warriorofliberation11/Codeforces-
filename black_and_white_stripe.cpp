#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0,j=0;
        int white=0,ans=INT_MAX;
        while(j<n)
        {
            if(s[j]=='W')
            white++;
            if(j-i+1>k)
            {
                while(j-i+1>k)
                {
                    if(s[i]=='W')
                    white--;
                    i++;
                }
            }
            if(j-i+1==k)
            ans=min(ans,white);
            j++;
        }
        cout<<ans<<endl;
    }
}