#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int tc=(a1+a2+a3+4)/5,tm=(b1+b2+b3+9)/10;
    if(tc+tm<=n)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}