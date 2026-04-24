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
        int prev=-1;
        bool k=false;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a<prev)
            k=true;
            prev=a;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}