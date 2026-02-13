#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b)
        cout<<-1<<endl;
        else
        {
            int cnt=d-b;
            a=a+cnt;
            if(a<c)
            cout<<-1<<endl;
            else
            cout<<cnt+(a-c)<<endl;
        }
    }
}