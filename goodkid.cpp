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
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mini=min(arr[i],mini);
        }
        bool k=true;
        int result=1;
        for(int i=0;i<n;i++)
        {
            if(k && arr[i]==mini)
            {
                result*=(mini+1);
                k=false;
            }
            else
            result*=arr[i];
        }
        cout<<result<<endl;
    }
}