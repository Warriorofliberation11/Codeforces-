#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int i=n-1,j=n-1,res=0;
        while(j>=0)
        {
            int cnt=i-j+1;
            if(cnt*arr[j]>=x)
            {
                res++;
                i=j-1;
            }
            j--;
        }
        cout<<res<<endl;
    }
}