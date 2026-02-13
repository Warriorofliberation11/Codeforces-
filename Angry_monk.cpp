#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        long long result=0;
        cin>>n>>k;
        int maxi=0;
        for(int i=0;i<k;i++)
        {
            int a;
            cin>>a;
            result+=(2*a-1);
            maxi=max(maxi,a);
        }
        result-=(2*maxi-1);
        cout<<result<<endl;
    }
}