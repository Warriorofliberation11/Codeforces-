#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=1;
        cin>>n;
        vector<int> arr(n);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> min1,min2;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            min1.push({arr[i],i});
            else
            min2.push({arr[i],i});
        }
        vector<int> ans(n,0);
        while(!min1.empty())
        {
            int a=min1.top().first,index=min1.top().second;
            min1.pop();
            ans[index]=cnt++;
        }
        while(!min2.empty())
        {
            int a=min2.top().first,index=min2.top().second;
            min2.pop();
            ans[index]=cnt++;
        }
        for(int i: ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}