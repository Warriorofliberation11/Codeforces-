#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string str;
        cin>>str;
        long long ans =a*n;
        if(b>=0)
        ans+=b*n;
        else
        {
            int cnt=1;
            for(int i=1;i<n;i++)
            {
                if(str[i]!=str[i-1])
                cnt++;
            }
            ans+=(cnt/2+1)*b;
        }
        cout<<ans<<endl;
    }
}