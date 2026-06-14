#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    string str="0000000000";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            int j=0;
            while(j<10 && str[j]=='1')
            j++;
            str[j]='1';
        }
        else if(s[i]=='R')
        {
            int j=9;
            while(j>=0 && str[j]=='1')
            j--;
            str[j]='1';
        }
        else
        str[s[i]-'0']='0';
    }
    cout<<str<<endl;
}