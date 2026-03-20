#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        int cnt=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<=c)
            {
                int a=log2(c/arr[i]);
                if(a>=cnt)
                cnt++;
            }
        }
        cout<<n-cnt<<endl;
    }
}