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
        long long sum=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n!=0)
        cout<<-1<<endl;
        else
        {
            int d=sum/n,cnt=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]>d)
                cnt++;
            }
            cout<<cnt<<endl;
        }
    }
}