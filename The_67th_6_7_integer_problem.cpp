#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> arr(7);
        for(int i=0;i<7;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<7;i++)
        {
            if(i==6)
            sum+=arr[i];
            else
            sum+=(arr[i]*-1);
        }
        cout<<sum<<endl;
    }
}