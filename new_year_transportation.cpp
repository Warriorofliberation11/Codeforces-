#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    cin>>n>>t;
    vector<long long> arr(n);
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=1;
    while(j<t)
    {
        j+=arr[j];
    }
    if(t==j)
    cout<<"YES";
    else
    cout<<"NO";
}