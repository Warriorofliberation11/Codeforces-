#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<long long> arr(n),temp(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            temp[i]=(arr[i]/x)*y;
        }
        long long sum=accumulate(temp.begin(),temp.end(),0LL);
        long long maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,sum+(arr[i]-temp[i]));
        }
        cout<<maxi<<endl;
    }
}