#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,extra=0;
        cin>>n;
        bool k=true;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int op=sum/n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<op)
            {
                if(extra>=op-arr[i])
                extra-=(op-arr[i]);
                else
                {
                    k=false;
                    break;
                }
            }
            else
            extra+=arr[i]-op;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}