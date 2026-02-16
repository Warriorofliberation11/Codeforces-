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
        int i=0;
        if(s[i]!='m' &&  s[i]!='M')
        {
            cout<<"NO"<<endl;
            continue;
        }
        while(i<n && (s[i]=='m' || s[i]=='M'))
        {
            i++;
        }
        if(i==n || (s[i]!='e' && s[i]!='E'))
        {
            cout<<"NO"<<endl;
            continue;
        }
        while(i<n && (s[i]=='e' || s[i]=='E'))
        {
            i++;
        }
        if(i==n || (s[i]!='o' && s[i]!='O'))
        {
            cout<<"NO"<<endl;
            continue;
        }
        while(i<n && (s[i]=='o' || s[i]=='O'))
        {
            i++;
        }
        if(i==n || (s[i]=='w' && s[i]=='W'))
        {
            cout<<"NO"<<endl;
            continue;
        }
        while(i<n && (s[i]=='w' || s[i]=='W'))
        {
            i++;
        }
        if(i==n)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}