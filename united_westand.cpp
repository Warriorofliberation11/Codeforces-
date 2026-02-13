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
        vector<int> arr(n),a,b;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int i=1;
        while(i<n && arr[0]==arr[i])
        {
            i++;
        }
        if(i==n)
        cout<<-1<<endl;
        else
        {
            cout<<i<<" "<<n-i<<endl;
            for(int j=0;j<i;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            for(int j=i;j<n;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
}