#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int i=1,j=1;
    while(j<=t.size())
    {
        if(s[i-1]==t[j-1])
        i++;
        j++;
    }
    cout<<i<<endl;
}