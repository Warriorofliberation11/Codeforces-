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
        string str="";
        char prev='z';
        for(int i=0;i<n-2;i++)
        {
            string s;
            cin>>s;
            if(i==0)
            str+=s;
            else
            {
                if(prev!=s[0])
                str+=s;
                else
                str+=s[1];
            }
            prev=s[1];
        }
        if(str.size()!=n)
        str+='a';
        cout<<str<<endl;
    }
}