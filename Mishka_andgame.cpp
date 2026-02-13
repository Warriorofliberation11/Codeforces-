#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int f=0,s=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        f++;
        else if(b>a)
        s++;
    }
    if(f>s)
    cout<<"Mishka";
    else if(s>f)
    cout<<"Chris";
    else
    cout<<"Friendship is magic!^^";
}