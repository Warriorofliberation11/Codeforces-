#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        long long i=sqrt(sum);
        if(i*i==sum)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}