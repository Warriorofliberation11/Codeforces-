#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size(),cnt=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        cnt++;
    }
    if((n%2==1 && cnt<=1 ) || (n%2==0 && cnt==1))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}