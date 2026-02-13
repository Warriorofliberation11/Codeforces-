#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        priority_queue<int> maxi;
        priority_queue<int,vector<int>,greater<int>> mini;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
            mini.push(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            maxi.push(a);
        }
        while(k>0 && !maxi.empty())
        {
            int ma=maxi.top(),mi=mini.top();
            maxi.pop();
            mini.pop();
            if(mi>=ma)
            break;
            sum+=(ma-mi);
            k--;
        }
        cout<<sum<<endl;
    }
}