#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,result=1;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a<arr[i])
            result+=arr[i]-a;
        }
        cout<<result<<endl;
    }
}