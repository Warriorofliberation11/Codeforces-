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
        int cnt=1,i=0;
        while(i<n && s[i]=='R')
        {
            i++;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}