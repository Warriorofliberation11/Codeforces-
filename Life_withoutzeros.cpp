#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    long long sum=a+b;
    int newa=0,newb=0;
    long long newc=0LL;
    string str1=to_string(a),str2=to_string(b),str3=to_string(sum);
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]=='0')
        continue;
        newa=newa*10+(str1[i]-'0');
    }
    for(int i=0;i<str2.size();i++)
    {
        if(str2[i]=='0')
        continue;
        newb=newb*10+(str2[i]-'0');
    }
    for(int i=0;i<str3.size();i++)
    {
        if(str3[i]=='0')
        continue;
        newc=newc*10+(str3[i]-'0');
    }
    long long s=newa+newb;
    if(s==newc)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}