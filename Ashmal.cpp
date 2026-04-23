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
        string str="";
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            string str1=str+s,str2=s+str;
            if(str1<str2)
            str=str1;
            else
            str=str2;
        }
        cout<<str<<endl;
    }
}