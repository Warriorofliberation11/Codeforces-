#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a,b;
    if(n%2==0)
    a=8;
    else
    a=9;
    b=n-a;
    cout<<a<<" "<<b;
}