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
        arr[0]=2,arr[1]=3,arr[2]=4;
        int k=5;
        for(int i=3;i<n;i++)
        {
            int sum=arr[i-1]+arr[i-2];
            while((3*k)%sum==0)
            k++;
            arr[i]=k;
            k++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}