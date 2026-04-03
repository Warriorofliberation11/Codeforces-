#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    int total=abs(a)+abs(b);
    if(s>=total && (total-s)%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}