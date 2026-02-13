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
        long long maxi=0,sum=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            maxi=max(maxi,a);
            sum+=a;
            if(sum-maxi==maxi)
            cnt++;
        }
        cout<<cnt<<endl;
    }
}