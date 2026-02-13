#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int t=7-max(a,b);
    if(t==2)
    cout<<"1/3";
    else if(t==3)
    cout<<"1/2";
    else if(t==6)
    cout<<"1/1";
    else if(t==4)
    cout<<"2/3";
    else
    cout<<t<<"/6";
}