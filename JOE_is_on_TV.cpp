#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=0;
    cout<<fixed<<setprecision(12);
    for(double i=1.0;i<=n;i++)
    {
        sum+=(1.0/i);
    }
    cout<<sum<<endl;
}