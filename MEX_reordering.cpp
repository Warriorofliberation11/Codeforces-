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
        int z=0;
        bool k=false;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(!a)
            z++;
            else if(a==1)
            k=true;
        }       
        if((z==1) || (z>1 && k))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}