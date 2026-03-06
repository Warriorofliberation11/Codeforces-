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
        long long sum=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                while(i<n && arr[i]<=0)
                {
                    sum+=abs(arr[i]);
                    i++;
                }
                cnt++;
            }
            if(i<n)
            sum+=abs(arr[i]);
        }
        cout<<sum<<" "<<cnt<<endl;
    }
}