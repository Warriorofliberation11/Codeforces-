#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[3];
        int x;
        cin>>x>>arr[0]>>arr[1]>>arr[2];
        if(arr[x-1]==0)
        cout<<"NO"<<endl;
        else
        {
            if(arr[arr[x-1]-1]==0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
}