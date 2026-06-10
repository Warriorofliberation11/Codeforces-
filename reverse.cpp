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
        vector<int> arr(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]=i;
        }
        int index=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            {
                reverse(arr.begin()+i,arr.begin()+mp[i+1]+1);
                break;
            }
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}