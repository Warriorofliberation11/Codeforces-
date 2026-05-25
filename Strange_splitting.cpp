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
            mp[arr[i]]++;
        }
        if(mp.size()==1)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            bool k=true;
            if(mp.size()==2)
            {
                for(int i=0;i<n;i++)
                {
                    if(mp[arr[i]]!=1 && k)
                    {
                        cout<<'R';
                        k=false;
                    }
                    else
                    cout<<'B';
                }
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(k)
                    {
                        k=false;
                        cout<<'R';
                    }
                    else
                    cout<<'B';
                }
            }
            cout<<endl;
        }
    }
}