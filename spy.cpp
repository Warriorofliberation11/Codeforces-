#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int> arr(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            a=it.first;
        }
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]==a)
            break;
        }
        cout<<i+1<<endl;
    }
}