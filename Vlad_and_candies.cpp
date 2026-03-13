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
        if(n==1)
        {
            if(arr[0]==1)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
        else
        {
            sort(arr.rbegin(),arr.rend());
            if(arr[0]-arr[1]>1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
}