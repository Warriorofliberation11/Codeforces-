#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    if(n>m)
    {
        cout<<-1<<endl;
        return -1;
    }
    while(n<m)
    {
        int a=m/n;
        if(a%3==0)
        n*=3;
        else if(a%2==0)
        n*=2;
        else
        {
            cout<<-1<<endl;
            return 0;
        }
        cnt++;
    }
    cout<<cnt<<endl;
}