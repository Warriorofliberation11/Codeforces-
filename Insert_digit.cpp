#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        string str="",s;
        cin>>s;
        int i=0;
        while(i<n && d<=s[i]-'0')
        {
            str+=s[i];
            i++;
        }
        str+=char(d+'0');
        while(i<n)
        {
            str+=s[i++];
        }
        cout<<str<<endl;
    }
}