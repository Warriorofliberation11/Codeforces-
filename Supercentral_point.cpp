#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i]={a,b};
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int top=-1,bottom=-1,right=-1,left=-1;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            if(arr[i].first==arr[j].first)
            {
                if(arr[i].second>arr[j].second)
                bottom=j;
                else if(arr[i].second<arr[j].second)
                top=j;
            }
            else if(arr[i].second==arr[j].second)
            {
                if(arr[i].first>arr[j].first)
                left=j;
                else if(arr[i].first<arr[j].first)
                right=j;
            }
        }
        if(top!=-1 && bottom!=-1 && right!=-1 && left!=-1)
        cnt++;
    }
    cout<<cnt;
}