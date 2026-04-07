#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        if(sum%2==0 && (n*k)%2==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}