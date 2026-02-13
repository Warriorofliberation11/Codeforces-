#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1,prev=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(i>0 && s[0]==prev)
        cnt++;
        prev=s[1];
    }
    cout<<cnt;
}