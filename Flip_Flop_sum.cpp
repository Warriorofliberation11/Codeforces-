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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        bool k=false;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==-1 && arr[i-1]==-1)
            {
                sum+=4;
                k=true;
                break;
            }
            else if(arr[i]!=arr[i-1])
            k=true;
        }
        if(k)
        cout<<sum<<endl;
        else
        cout<<sum-4<<endl;
    }
}