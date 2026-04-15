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
        string str=s;
        int cnt=0;
        sort(str.begin(),str.end());
        for(int i=0;i<n;i++)
        {
            if(str[i]!=s[i])
            cnt++;
        }
        cout<<cnt<<endl;
    }
}