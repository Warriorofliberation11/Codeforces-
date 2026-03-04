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
        int i=n-1;
        string str="";
        while(i>=0)
        {
            if(s[i]!='0')
            {
                int a=s[i]-'0';
                str=char('a'+a-1)+str;
                i--;
            }
            else
            {
                int a=(s[i-2]-'0');
                a=a*10+(s[i-1]-'0');
                str=(char)('a'+a-1)+str;
                i-=3;
            }
        }
        cout<<str<<endl;
    }
}