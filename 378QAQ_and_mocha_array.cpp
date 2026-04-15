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
        bool k=true;
        int i=0;
        while(i<n && arr[i]%arr[0]==0)
        i++;
        int v=arr[i];
        i++;
        while(i<n)
        {
            if(arr[i]%arr[0]!=0 && arr[i]%v!=0)
            {
                k=false;
                break;
            }
            i++;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}