#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        string s=n;
        sort(s.begin(),s.end());
        if(n.size()==2 && n[0]==s[0])
        cout<<n[1]<<endl;
        else
        cout<<s[0]<<endl;
    }
}