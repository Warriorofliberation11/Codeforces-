#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int t=-1,o=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            o=i;
            else if(s[i]=='3')
            t=i;
        }
        if(o<t)
        cout<<13<<endl;
        else if(t<o)
        cout<<31<<endl;
        else
        cout<<-1<<endl;
    }
}