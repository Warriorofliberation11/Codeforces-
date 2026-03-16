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
        unordered_map<int,int> mp;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]=i;
        }
        int m=n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=m)
            {
                int j=min(mp[m],mp[arr[i]]),k=max(mp[m],mp[arr[i]]);
                while(j<k)
                {
                    int t=arr[j];
                    arr[j]=arr[k];
                    arr[k]=t;
                    j++;
                    k--;
                }
                break;
            }
            m--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}