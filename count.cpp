#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        bool k=true;
        int cnt=0;
        while(x.size()<50)
        {
            if(x.find(s)!=string::npos)
            {
                k=false;
                break;
            }
            x+=x;
            cnt++;
        }
        if(!k)
        cout<<cnt<<endl;
        else
        cout<<-1<<endl;
    }
}