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
        vector<int> arr(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int left=0,right=2*n-1;
        vector<pair<int,int>> res;
        while(left<right)
        {
            res.push_back({arr[left],arr[right]});
            left++;
            right--;
        }
        int sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=res[i-1].second-res[i].second+res[i].first-res[i-1].first;
        }
        cout<<sum<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<res[i].first<<" "<<res[i].second<<endl;
        }
    }
}