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
        set<int> st;
        bool k=true;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                while(i<n && arr[i]<=arr[i-1])
                {
                    i++;
                }
                if(i!=n)
                {
                    k=false;
                    break;
                }
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}