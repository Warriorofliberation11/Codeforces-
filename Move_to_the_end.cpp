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
        cin>>arr[i];
        vector<long long> temp(n);
        long long maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,arr[i]);
            temp[i]=maxi;
        }
        vector<long long> prefix(n);
        prefix[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            prefix[i]=arr[i]+prefix[i+1];
        }
        for(int i=0;i<n;i++)
        {
            int index=n-i-1;
            long long val =(index+1<n)?prefix[index+1]:0;
            cout<<temp[index]+val<<" ";
        }
        cout<<endl;
    }
}