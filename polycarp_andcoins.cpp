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
        int res1=n/3,res2=(n+2)/3;
        if(res1==res2)
        cout<<res1<<" "<<res2<<endl;
        else
        {
            if(res1+2*res2==n)
            cout<<res1<<" "<<res2<<endl;
            else
            cout<<res2<<" "<<res1<<endl;
        }
    }
}