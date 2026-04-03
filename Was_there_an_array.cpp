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
        int prev2=-1,prev1=-1;
        bool k=true;
        for(int i=0;i<n-2;i++)
        {
            int a;
            cin>>a;
            if(a==1 && prev1==0 && prev2==1)
            k=false;
            prev2=prev1;
            prev1=a;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}