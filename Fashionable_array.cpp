#include<bits/stdc++.h>
using namespace std;
void check(int i,int j,vector<int> & arr,int &mini)
{
    if((arr[j]-arr[i])%2==0)
    {
        int v=arr.size()-1-j+i;
        mini=min(mini,v);
        return;
    }
    check(i+1,j,arr,mini);
    check(i,j-1,arr,mini);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        check(0,n-1,arr,mini);
        cout<<mini<<endl;
    }
}