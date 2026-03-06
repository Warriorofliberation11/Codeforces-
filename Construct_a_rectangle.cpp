#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,l2,l3;
        cin>>l1>>l2>>l3;
        if(l1==l2)
        {
            if(l3%2==0)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
        else if(l1==l3)
        {
            if(l2%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(l2==l3)
        {
            if(l1%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            int maxi=max(l1,max(l2,l3));
            int mini=min(l1,min(l2,l3));
            int mid=l1+l2+l3-(maxi+mini);
            if(mid+mini==maxi)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}