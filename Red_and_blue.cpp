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
        int maxi1=0,prev=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i==0)
            prev=a;
            else 
            prev+=a;
            maxi1=max(maxi1,prev);
        }
        int m;
        cin>>m;
        int maxi2=0;
        prev=0;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            if(i==0)
            prev=a;
            else 
            prev+=a;
            maxi2=max(maxi2,prev);
        }
        cout<<max(0,maxi1+maxi2)<<endl;
    }
}