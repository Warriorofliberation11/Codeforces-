#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int result=0,i=0,j=0;
        for(;j<n;j++)
        {
            if(arr[j]==1)
            i=j+1;
            if(j-i+1==k)
            {
                result++;
                i=j+2;
            }
        }
        cout<<result<<endl;
    }
}