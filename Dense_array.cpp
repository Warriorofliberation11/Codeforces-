#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            int mini=min(arr[i],arr[i-1]);
            int maxi=max(arr[i],arr[i-1]);
            while(mini*2<maxi)
            {
                mini=mini*2;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}