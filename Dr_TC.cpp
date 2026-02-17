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
        int curr=0,res=0;
        for(char i:s)
        {
            if(i=='1')
            curr++;
        }
        for(char i:s)
        {
            if(i=='0')
            res+=curr+1;
            else
            res+=curr-1;
        }
        cout<<res<<endl;
    }
}