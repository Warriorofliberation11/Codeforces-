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
        unordered_map<int,int> row,col;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            row[x]++;
            col[y]++;
        }
        int rsp=n-row.size(),csp=m-col.size();
        bool k=true;
        for(auto it: row)
        {
            if(it.second>2 || (it.second==2 && rsp==0))
            {
                k=false;
                break;
            }
            else if(it.second==2 && rsp!=0)
            rsp--;
        }
        if(!k)
        cout<<"NO"<<endl;
        else
        {
            k=true;
            for(auto it: col)
            {
                if(it.second>2 || (it.second==2 && csp==0))
                {
                    k=false;
                    break;
                }
                else if(it.second==2 && csp!=0)
                csp--;
            }
            if(k)
            {
                if(rsp==0 && csp==0)
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}