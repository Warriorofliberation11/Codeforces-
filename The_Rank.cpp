#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=1;i<=n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        arr[i-1]={a+b+c+d,i};
    }
    sort(arr.begin(),arr.end(),[](pair<int,int> &a ,pair<int,int> &b)
    {
        if(a.first==b.first)
        return a.second<b.second;
        return a.first>b.first;
    });
    for(int i=0;i<n;i++)
    {
        if(arr[i].second==1)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}