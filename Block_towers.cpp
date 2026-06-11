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
        int val;
        cin>>val;
        vector<int> arr(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>val)
            {
                int diff=(arr[i]-val+1)/2;
                val+=diff;
            }
        }
        cout<<val<<endl;
    }
}