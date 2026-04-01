#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        long sum=4*m;
        n--;
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            sum+=2*(x+y);
        }
        cout<<sum<<endl;
    }
}