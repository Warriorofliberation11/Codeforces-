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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long cnt;
        if(arr[0]>=arr[1])
        cnt=arr[0]+arr[1];
        else 
        cnt=2*arr[0];
        cout<<cnt<<endl;
    }
}