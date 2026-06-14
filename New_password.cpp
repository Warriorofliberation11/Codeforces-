#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s="";
    for(int i=0;i<k;i++)
    s+=('a'+i);
    for(int i=k;i<n;i++)
    s+=s[i%k];
    cout<<s<<endl;
}