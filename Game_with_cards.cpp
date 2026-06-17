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
        int maxi1=0,maxi2=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            maxi1=max(maxi1,a);
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            maxi2=max(maxi2,a);
        }
        if(maxi1>maxi2)
        cout<<"Alice"<<endl<<"Alice"<<endl;
        else if(maxi2>maxi1)
        cout<<"Bob"<<endl<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl<<"Bob"<<endl;
    }
}