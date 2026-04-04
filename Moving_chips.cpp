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
        int cnt=0,ans=0,one=-1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==0)
            cnt++;
            else
            {
                if(one!=-1)
                ans+=cnt;
                one=i;
                cnt=0;
            }
        }
        cout<<ans<<endl;
    }
}