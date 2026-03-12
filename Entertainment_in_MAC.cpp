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
        int m=s.size();
        for(int i=0;i<m/2;i++)
        {
            char t=str[i];
            str[i]=str[m-i-1];
            str[m-i-1]=t;
        }
        if(str<s)
        s=str+s;
        cout<<s<<endl;
    }
}