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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int i=2,j=n-2;
        long long sumr=arr[n-1],sumb=arr[0]+arr[1];
        while(i<=j)
        {
            if(sumr>sumb)
            break;
            sumr+=arr[j--];
            sumb+=arr[i++];
        }
        if(sumr>sumb)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}