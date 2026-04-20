#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        bool b=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                b=true;
                break;
            }
        }
        for(int i=0;i<q;i++)
        {
            int a;
            cin>>a;
            if(!b)
            {
                cout<<a<<endl;
                continue;
            }
            int cnt=0;
            for(int j=0;j<n;j=(j+1)%n)
            {
                if(a==0)
                break;
                if(s[j]=='B')
                a=a/2;
                else
                a--;
                cnt++;
            }
            cout<<cnt<<endl;
        }
    }
}