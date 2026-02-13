#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int cnt=0;
    while(n>0)
    {
        int a=n%10;
        if(a==7 || a==4)
        cnt++;
        n=n/10;
    }
    if(cnt==4 || cnt==7)
    cout<<"YES";
    else
    cout<<"NO";
}