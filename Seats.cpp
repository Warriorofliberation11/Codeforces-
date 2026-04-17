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
        s='1'+s+'1';
        int cnt=0,prev;
        for(int i=1;i<=n;i++)
        {
            if(s[i]=='0')
            {
                if(s[i-1]=='1')
                prev=i;
                if(s[i+1]=='1')
                cnt+=(i-prev+1+(prev==1)+(i==n))/3;
            }
            else
            cnt++;
        }
        cout<<cnt<<endl;
    }
}