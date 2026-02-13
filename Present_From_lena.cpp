#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    bool p=true;
    for(int i=0;i<=n*2;i++)
    {
        for(int j=n-k;j>0;j--)
        {
            cout<<"  ";
        }
        for(int j=0;j<=k;j++)
        {
            if(k==0)
            cout<<j;
            else
            cout<<j<<" ";
        }
        for(int j=k-1;j>=0;j--)
        {
            if(j!=0)
            cout<<j<<" ";
            else
            cout<<j;
        }
        if(k==n)
        p=false;
        k=(p==true)?k+1:k-1;
        cout<<endl;
    }
}