#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,c,h;
        cin>>b>>c>>h;
        int k=c+h;
        if(b>k+1)
        cout<<2*k+1<<endl;
        else
        cout<<2*b-1<<endl;
    }
}