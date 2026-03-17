#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str="";
        for(int i=1;i<n-k;i++)
        {
            str+='0';
        }
        for(int i=1;i<k;i++)
        {
            str+='1';
        }
        if(k>0)
        str='1'+str;
        if(n-k>0)
        str+='0';
        cout<<str<<endl;
    }
}