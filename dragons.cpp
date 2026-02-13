#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,n;
    cin>>s>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i]={a,b};
    }
    sort(arr.begin(),arr.end());
    int i=0;
    while(i<n)
    {
        if(s<=arr[i].first)
        break;
        s+=arr[i].second;
        i++;
    }
    if(i==n)
    cout<<"YES";
    else
    cout<<"NO";
}