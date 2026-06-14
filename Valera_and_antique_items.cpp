#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n>>v;
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        vector<int> arr(k);
        for(int j=0;j<k;j++)
        cin>>arr[j];
        sort(arr.begin(),arr.end());
        if(arr[0]<v)
        q.push(i);
    }
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}