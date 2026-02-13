#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,curr;
        cin>>n;
        bool k=true;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i!=0)
            {
                int m=abs(curr-a);
                if(m!=5 && m!=7)
                k=false;
            }
            curr=a;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}