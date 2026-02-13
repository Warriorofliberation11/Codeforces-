#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
            sort(arr[i].begin(),arr[i].end());
            pq.push({arr[i][0],i+1});
        }
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        bool k=true;
        int i=0,prev=-1;
        while(i<m)
        {
            int j=0;
            while(j<n)
            {
                int index=ans[j]-1;
                if(arr[index][i]<=prev)
                {
                    k=false;
                    break;
                }
                else
                prev=arr[index][i];
                j++;
            }
            if(!k)
            break;
            i++;
        }
        if(!k)
        {
            cout<<-1<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}