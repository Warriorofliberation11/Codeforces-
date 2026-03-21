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
        for(int i=0;i<n;i++)
        {
            int g=0,s=0;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                g++;
                else if(arr[i]>arr[j]) 
                s++;
            }
            cout<<max(g,s)<<" ";
        }
        cout<<endl;
    }
}