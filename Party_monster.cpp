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
        int cnt=0;
        for(char i: s)
        {
            if(i=='(')
            cnt++;
            else
            cnt--;
        }
        if(cnt==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}