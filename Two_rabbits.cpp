#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>x>>y>>a>>b;
        if(x>y)
        cout<<-1<<endl;
        else
        {
            if((y-x)%(a+b)!=0)
            cout<<-1<<endl;
            else
            cout<<(y-x)/(a+b)<<endl;
        }
    }
}