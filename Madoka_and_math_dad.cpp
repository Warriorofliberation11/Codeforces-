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
        string str;
        int m=n;
        bool k=true;
        while(m>0)
        {
            if(m==1)
            {
                k=false;
                break;
            }
            str+='2';
            m-=2;
            if(m>=1)
            {
                m-=1;
                str+='1';
            }
        }
        if(k)
        cout<<str<<endl;
        else 
        {
            str="";
            while(n>0)
            {
                str+='1';
                n-=1;
                if(n!=0)
                {
                    n-=2;
                    str+='2';
                }
            }
            cout<<str<<endl;
        }
    }
}