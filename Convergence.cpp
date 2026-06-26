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
        if(arr[0]==arr[n-1])
        {
            cout<<0<<endl;
            continue;
        }
        int i=0,j=n-1,cnt=0;
        while(i<j && arr[i]!=arr[j])
        {
            i++;
            j--;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}