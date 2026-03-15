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
        vector<bool> pre_check(4,false),post_check(4,false);
        if(s[0]=='2')
        pre_check[0]=true;
        string str="2020";
        if(s[n-1]=='0')
        post_check[3]=true;
        for(int i=1;i<4;i++)
        {
            if(str[i]==s[i])
            pre_check[i]=pre_check[i]|pre_check[i-1];
            if(str[4-i-1]==s[n-i-1])
            post_check[4-i-1]=post_check[4-i-1]|post_check[4-i];
        }
        if(pre_check[3] || post_check[0] ||(pre_check[2] && post_check[3]) ||(pre_check[1] && post_check[2]) ||(pre_check[0] && post_check[1]))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}