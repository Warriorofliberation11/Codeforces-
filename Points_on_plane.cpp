#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long left=0,right=1e9,res=0;
        while(left<=right)
        {
            long long mid=(left+right)/2;
            if(mid*mid<n)
            {
                res=mid;
                left=mid+1;
            }
            else
            right=mid-1;
        }
        cout<<res<<endl;
    }
}