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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int start=arr[0],end=arr[n-1];
        int i=0;
        while(i<n && start==arr[i])
        i++;
        if(i==n)
        {
            cout<<0<<endl;
            continue;
        }
        int j=n-1;
        while(j>=0 && end==arr[j])
        j--;
        if(start==end)
        cout<<j-i+1<<endl;
        else
        cout<<min(n-i,j+1)<<endl;
    }
}