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
        int max1=0,max2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            max1=max(max1,arr[i]);
            else
            max2=max(max2,arr[i]);
        }
        cout<<max(max1+(n-n/2),max2+n/2)<<endl;
    }
}