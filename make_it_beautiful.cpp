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
        int prev=-1,cnt=1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        if(n>1 && arr[0]==arr[n-1])
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int i=0,j=n-1;
            bool k=true;
            while(i<=j)
            {
                if(k)
                cout<<arr[i++]<<" ";
                else
                cout<<arr[j--]<<" ";
                k=!k;
            }
            cout<<endl;
        }
    }
}