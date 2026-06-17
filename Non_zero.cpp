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
        int neg=0,pos=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==0)
            {
                cnt++;
                pos++;
            }
            else if(a>0)
            pos+=a;
            else
            neg+=a;
        }
        if(pos==abs(neg))
        cout<<cnt+1<<endl;
        else
        cout<<cnt<<endl;
    }
}