#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1]+arr[i+1])
            cnt++;
        }
        if(k==1)
        cout<<(n-1)/2<<endl;
        else
        cout<<cnt<<endl;
    }
}