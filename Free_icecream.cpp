#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        char ch;
        long long d;
        cin>>ch>>d;
        if(ch=='+')
        x+=d;
        else
        {
            if(x>=d)
            x-=d;
            else
            cnt++;
        }
    }
    cout<<x<<" "<<cnt<<endl;
}