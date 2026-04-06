#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i]={a,i+1};
    }
    sort(arr.begin(),arr.end());
    vector<int> ans;
    int sum=0,i=0;
    while(i<n)
    {
        sum+=arr[i].first;
        if(sum>k)
        break;
        ans.push_back(arr[i].second);
        i++;
    }
    cout<<ans.size()<<endl;
    for(int it: ans)
    cout<<it<<" ";
    cout<<endl;
}