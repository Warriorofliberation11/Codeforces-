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
        int prev=n;
        vector<pair<int,int>> arr;
        for(int i=n-1;i>=1;i--)
        {
            arr.push_back({i,prev});
            prev=(i+prev+1)/2;
        }
        cout<<prev<<endl;
        for(int i=0;i<n-1;i++)
        {
            cout<<arr[i].first<<" "<<arr[i].second<<endl;
        }
    }
}