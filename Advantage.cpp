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
        int max1=0,max2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(max1<arr[i])
            {
                max2=max1;
                max1=arr[i];
            }
            else
            max2=max(max2,arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=max1)
            cout<<arr[i]-max1<<" ";
            else
            cout<<arr[i]-max2<<" ";
        }
        cout<<endl;
    }
}