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
        int n=s.size();
        string str="";
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='p')
            str+='q';
            else if(s[i]=='q')
            str+='p';
            else
            str+='w';
        }
        cout<<str<<endl;
    }
}