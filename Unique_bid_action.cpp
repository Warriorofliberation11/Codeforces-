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
        unordered_map<int,int> mp,index;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            index[a]=i;
        }
        int mini=INT_MAX,ind=-1;
        for(auto it: mp)
        {
            if(it.second==1 && mini>it.first)
            {
                mini=it.first;
                ind=index[it.first]+1;
            }
        }
        cout<<ind<<endl;
    }
}