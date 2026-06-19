#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,first=0,last=0;
    cin>>n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<2*n;i++)
    {
        if(i>=n)
        last+=arr[i];
        else
        first+=arr[i];
    }
    if(first!=last)
    {
        for(int i=0;i<2*n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    else
    cout<<-1<<endl;
}