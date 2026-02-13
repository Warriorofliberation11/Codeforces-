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
        int r=((n%10)-1)*10,cnt=1;
        while(n>0)
        {
            r+=cnt;
            cnt++;
            n=n/10;
        }
        cout<<r<<endl;
    }
}