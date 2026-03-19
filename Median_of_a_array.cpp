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
        sort(arr.begin(),arr.end());
        int a=(n-1)/2,i=a,cnt=0;
        while(i<n && arr[i]==arr[a])
        {
            i++;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}