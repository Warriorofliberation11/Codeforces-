#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    int req7=0,req4=0;
    while(n-s*7>=0)
    {
        int rem=n-s*7;
        if(rem%4==0)
        {
            req7=s;
            req4=rem/4;
        }
        s++;
    }
    string str="";
    for(int i=1;i<=req4;i++)
    {
        str+='4';
    }
    for(int i=1;i<=req7;i++)
    {
        str+='7';
    }
    if(str=="")
    cout<<-1<<endl;
    else
    cout<<str<<endl;
}