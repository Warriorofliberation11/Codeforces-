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
        cout<<arr[0]<<endl;
        else
        {
            sort(arr.begin(),arr.end());
            long long prev=arr[0]+arr[1]-1;
            for(int i=2;i<n;i++)
            {
                prev+=arr[i]-1;
            }
            cout<<prev<<endl;
        }
    }
}