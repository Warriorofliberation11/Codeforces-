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
        string s;
        cin>>s;
        string str(n,'+');
        int l=0,r=n-1,two=0;
        for(char i: s)
        {
            if(i=='0')
            str[l++]='-';
            else if(i=='1')
            str[r--]='-';
            else
            two++;
        }
        if((r-l+1)==two)
        {
            while(l<=r)
            str[l++]='-';
        }
        else
        while(two--)
        {
            str[l++]='?';
            str[r--]='?';
        }
        cout<<str<<endl;
    }
}