#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j,k;
        cin>>n>>j>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        if(k!=1)
        cout<<"YES"<<endl;
        else
        {
            int m=*max_element(arr.begin(),arr.end());
            if(m!=arr[j-1])
            cout<<"NO"<<endl;
            else 
            cout<<"YES"<<endl;
        }
    }
}