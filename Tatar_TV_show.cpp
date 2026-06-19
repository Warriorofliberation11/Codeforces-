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
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(i+k>=n)
                break;
                s[i]='0';
                s[i+k]=(s[i+k]=='0')?'1':'0';
            }
        }
        bool check=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                check=false;
                break;
            }
        }
        cout<<(check?"YES":"NO")<<endl;
    }
}