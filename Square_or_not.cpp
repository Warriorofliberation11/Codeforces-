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
        int a=sqrt(n);
        if(a*a!=n)
        cout<<"NO"<<endl;
        else
        {
            bool k=true;
            for(int i=0;i<a;i++)
            {
                for(int j=0;j<a;j++)
                {
                    if(i==0 || i==a-1 || j==0 ||j==a-1)
                    {
                        if(s[i*a+j]=='0')
                        k=false;
                    }
                    else
                    {
                        if(s[i*a+j]=='1')
                        k=false;
                    }
                }
            }
            if(k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}