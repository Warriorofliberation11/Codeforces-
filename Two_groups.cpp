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
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            sum+=a;
        }
        cout<<abs(sum)<<endl;
    }
}