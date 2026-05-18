#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        double sum=0;
        for(int i=0;i<n;i++)
        {
            double a;
            cin>>a;
            sum+=a;
        }
        if(sum/n==x)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}