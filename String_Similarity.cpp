#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,z=0,o=0;
        cin>>n;
        string s,str="";
        cin>>s;
        int m=(s.size()+1)/2;
        for(char i:s)
        {
            if(i=='0')
            z++;
            else
            o++;
        }
        if(z>o)
        {
            for(int i=0;i<m;i++)
            {
                str+='0';
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                str+='1';
            }
        }
        cout<<str<<endl;
    }
}