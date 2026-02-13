#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int maxi=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cnt+=maxi-arr[i];
    }
    cout<<cnt<<endl;
}