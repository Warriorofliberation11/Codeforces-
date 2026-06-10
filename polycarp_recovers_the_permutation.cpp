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
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
        }
        if(maxi==arr[0] || maxi==arr[n-1])
        {
            for(int i=n-1;i>=0;i--)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
        else
        cout<<-1<<endl;
    }   
}