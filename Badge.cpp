#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n+1;i++)
    {
        int k=i;
        unordered_map<int,int> mp;
        while(mp[k]!=2)
        {
            mp[k]++;
            k=arr[k];
        }
        cout<<k<<" ";
    }
    cout<<endl;
}