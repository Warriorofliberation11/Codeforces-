#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        cout<<abs(arr[0]-s)<<endl;
        else
        {
            if(arr[0]>=s)
            cout<<arr[n-1]-s<<endl;
            else if(arr[n-1]<=s)
            cout<<s-arr[0]<<endl;
            else
            {
                int cnt=0;
                if(s-arr[0]<=arr[n-1]-s)
                cout<<(s-arr[0])+(arr[n-1]-arr[0])<<endl;
                else
                cout<<(arr[n-1]-s)+(arr[n-1]-arr[0])<<endl;                
            }
        }   
    }
}