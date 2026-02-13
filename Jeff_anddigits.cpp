#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0,zero=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==5)
        cnt++;
        else
        zero++;
    }
    if(cnt>=9 && zero>=1)
    {
        while(cnt>=9)
        {
            for(int i=0;i<9;i++)
            cout<<5;
            cnt-=9;
        }
        while(zero--)
        cout<<0;
    }
    else if(zero>=1)
    cout<<0;
    else
    cout<<-1;
}