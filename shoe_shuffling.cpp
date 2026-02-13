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
        vector<int> arr(n+1);
        map<int,int> mp;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        bool k=true;
        for(auto it: mp)
        {
            if(it.second==1)
            {
                cout<<-1;
                k=false;
                break;
            }
        }
        if(k)
        {
            int i=1;
            while(i<=n)
            {
                int j=i+1;
                while(j<=n && arr[j]==arr[i])
                {
                    cout<<j<<" ";
                    j++;
                }
                cout<<i<<" ";
                i=j;
            }
        }
        cout<<endl;
    }
}