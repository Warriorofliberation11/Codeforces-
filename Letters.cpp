#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<long long> prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++)
    {
        long long a;
        cin>>a;
        prefix[i]=prefix[i-1]+a;
    }
    for(int k=0;k<m;k++)
    {
        long long a;
        cin>>a;
        int i=1,j=n;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(prefix[mid]==a)
            {
                i=mid;
                break;
            }
            if(prefix[mid]>a)
            j=mid-1;
            else
            i=mid+1;
        }
        cout<<i<<" "<<a-prefix[i-1]<<endl;
    }
}