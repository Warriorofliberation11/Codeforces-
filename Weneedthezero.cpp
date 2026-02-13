#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,xo=0,maxi=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            maxi=max(maxi,a);
            xo^=a;
        }
        if(n%2==1)
        cout<<xo<<endl;
        else
        {
            if(xo==0)
            cout<<maxi<<endl;
            else
            cout<<-1<<endl;
        }
    }
}