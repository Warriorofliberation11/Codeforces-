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
        long long win=n,lose=0,cnt=0;
        while(win!=1 || lose!=1)
        {
            cnt+=lose/2+win/2;
            int l=lose%2,w=win%2;
            lose=lose/2+win/2+l;
            win=win/2+w;
        }
        cout<<cnt+1<<endl;
    }
}