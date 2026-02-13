#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;   
    int maxi=n-a;
    if(maxi>b)
    cout<<b+1;
    else
    cout<<maxi;
}