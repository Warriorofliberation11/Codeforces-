#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,x,total=0;
        cin>>n>>s>>x;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            total+=a;
        }
        if(s<total)
        cout<<"NO"<<endl;
        else if((total-s)%x==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}