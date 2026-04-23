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
        cin>>arr[i];
        int index=-1;
        for(int i=0;i<n;i++)
        {
            bool p=true;
            for(int j=0;j<n;j++)
            {
                if(i!=j && abs(arr[i]-arr[j])%k==0)
                {
                    p=false;
                    break;
                }
            }
            if(p)
            {
                index=i+1;
                break;
            }
        }
        if(index!=-1)
        cout<<"YES"<<endl<<index<<endl;
        else
        cout<<"NO"<<endl;
    }
}