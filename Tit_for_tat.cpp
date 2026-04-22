#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long add=0;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i=0;
        while(k--)
        {
            while(i<n-1 && arr[i]==0)
            i++;
            if(i==n-1)
            break;
            arr[i]-=1;
            add+=1;
        }
        arr[n-1]+=add;
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}