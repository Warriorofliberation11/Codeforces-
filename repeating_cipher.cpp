#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,inc=1,i=0;
    cin>>n;
    string s,str="";
    cin>>s;
    while(i<n)
    {
        str+=s[i];
        i+=inc;
        inc++;
    }
    cout<<str;
}