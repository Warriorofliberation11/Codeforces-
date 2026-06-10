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
        vector<int> arr(n+1,0);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr[a]++;
        }
        sort(arr.rbegin(),arr.rend());
        int maxi=INT_MIN;
        for(int i=0;i<=n;i++)
        {
            maxi=max(maxi,arr[i]*(i+1));
        }
        cout<<maxi<<endl;
    }
}