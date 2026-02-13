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
        long long sum1=pow(2,n);
        for(int i=1;i<n/2;i++)
        {
            sum1+=pow(2,i);
        }
        long long sum2=2*(pow(2,n)-1)-sum1;
        cout<<abs(sum2-sum1)<<endl;
    }
}