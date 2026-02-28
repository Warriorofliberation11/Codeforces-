#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,res=0;
        while(i<n)
        {
            if(s[i]=='@')
            res++;
            if(i+1<n && s[i+1]!='*')
            i++;
            else if(i+2<n && s[i+2]!='*')
            i+=2;
            else 
            break;
        }
        cout<<res<<endl;
    }
}