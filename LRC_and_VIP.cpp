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
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        if(temp[0]==temp[n-1])
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==temp[n-1])
                cout<<1<<" ";
                else
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
}