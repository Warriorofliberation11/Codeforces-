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
        int s,e;
        cin>>s>>e;
        n--;
        while(n--)
        {
            int st,en;
            cin>>st>>en;
            if(s==-1)
            continue;
            if(st>=s && en>=e)
            s=-1;
        }
        cout<<s<<endl;
    }
}