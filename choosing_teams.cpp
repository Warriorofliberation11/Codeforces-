#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int cnt=0;
    for(int i=2;i<n;i+=3)
    {
        if(5-arr[i]>=k)
        cnt++;
    }
    cout<<cnt<<endl;
}