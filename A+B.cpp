#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=0,n=s.size(),a=-1,b=-1;
        while(i<n)
        {
            int temp=0;
            while(i<n && s[i]!='+')
            {
                temp=temp*10+(s[i]-'0');
                i++;
            }
            i++;
            if(a==-1)
            a=temp;
            else
            b=temp;
        }
        cout<<a+b<<endl;
    }
}