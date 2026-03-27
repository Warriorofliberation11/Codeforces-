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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        cout<<abs(arr[n-1]-arr[0])+abs(arr[n-1]-arr[1])+abs(arr[n-2]-arr[0])+abs(arr[n-2]-arr[1])<<endl;
    }
}