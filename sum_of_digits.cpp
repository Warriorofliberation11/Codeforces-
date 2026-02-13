#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    long long cnt=0;
    while(str.size()!=1)
    {
        long long ans=0;
        for(int i=0;i<str.size();i++)
        {
            ans+=(str[i]-'0');
        }
        cnt++;
        str=to_string(ans);
    }
    cout<<cnt;
}