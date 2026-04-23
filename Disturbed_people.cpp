#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> ans;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]==0 && arr[i-1]==1 && arr[i+1]==1)
        ans.push_back(i);
    }
    int cnt=0;
    for(int i=1;i<ans.size();i++)
    {
        if(ans[i]-ans[i-1]==2)
        cnt++,i++;
    }
    cout<<ans.size()-cnt<<endl;
}