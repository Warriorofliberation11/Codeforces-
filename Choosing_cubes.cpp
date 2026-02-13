#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int value=arr[f-1];
        sort(arr.rbegin(),arr.rend());
        bool k1=false,k2=false;
        for(int i=0;i<k;i++)
        {
            if(arr[i]==value)
            k1=true;
        }
        for(int i=k;i<n;i++)
        {
            if(arr[i]==value)
            k2=true;
        }
        if(k1 && k2)
        cout<<"MAYBE"<<endl;
        else if(k2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}