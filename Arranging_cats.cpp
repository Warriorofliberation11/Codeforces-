#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt1=0,cnt2=0,sum1=0,sum2=0;
        cin>>n;
        string s,f;
        cin>>s>>f;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' || f[i]=='1')
            {
                if(s[i]=='1' && f[i]=='1')
                {
                    sum1++;
                    sum2++;
                }
                else if(s[i]=='1' && f[i]=='0')
                {
                    sum1++;
                    cnt1++;
                }
                else
                {
                    sum2++;
                    cnt2++;
                }
            }
        }
        cout<<abs(sum1-sum2)+min(cnt1,cnt2)<<endl;
    }
}