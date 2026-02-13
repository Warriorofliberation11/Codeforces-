#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2,cnt=0;
        cin>>a1>>a2>>b1>>b2;
        int k1,k2,k3,k4;
        if(a1>b1)
        k1=1;
        else if(a1==b1)
        k1=0;
        else
        k1=-1;
        if(a2>b2)
        k2=1;
        else if(a2==b2)
        k2=0;
        else
        k2=-1;
        if(a2>b1)
        k3=1;
        else if(a2==b1)
        k3=0;
        else
        k3=-1;
        if(a1>b2)
        k4=1;
        else if(a1==b2)
        k4=0;
        else 
        k4=-1;
        if(k1+k2>0)
        cnt+=2;
        if(k3+k4>0)
        cnt+=2;
        cout<<cnt<<endl;
    }
}