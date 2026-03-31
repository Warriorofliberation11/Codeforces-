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
        int one=0,prev;
        bool k=true;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i!=0 && a==prev && a==0)
            k=false;
            prev=a;
            if(a==1)
            one++;
        }
        if(one==n || !k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}