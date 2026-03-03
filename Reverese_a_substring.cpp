#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=1;
    while(i<n && s[i]>=s[i-1])
    {
        i++;
    }
    if(i==n)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<i<<" "<<i+1<<endl;
    }
}