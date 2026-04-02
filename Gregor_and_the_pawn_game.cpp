#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        string s,t;
        cin>>t>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && t[i]=='0')
            cnt++;
            else if(s[i]=='1' && t[i]=='1')
            {
                if(i-1>=0 && t[i-1]=='1')
                {
                    cnt++;
                    t[i-1]='0';
                }
                else if(i+1<n && t[i+1]=='1')
                {
                    cnt++;
                    t[i+1]='0';
                }
            }
        }
        cout<<cnt<<endl;
    }
}