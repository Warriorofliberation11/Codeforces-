#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> g(n);
        for(int i=0;i<n;i++)
        cin>>g[i];
        vector<int> nums=g;
        sort(nums.begin(),nums.end());
        if(nums==g || k>1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}