#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool one=false;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        one=true;
    }
    if(one)
    cout<<-1<<endl;
    else
    cout<<1<<endl;
}