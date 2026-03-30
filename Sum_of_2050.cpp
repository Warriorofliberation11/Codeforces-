#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int cnt=0;
        bool k=true;
        while(n>0)
        {
            if(n<2050)
            {
                k=false;
                break;
            }
            long long v=205000000000000000;
            while(v>n)
            {
                v=v/10;
            }
            n-=v;
            cnt++;
        }
        if(k)
        cout<<cnt<<endl;
        else
        cout<<-1<<endl;
    }
}