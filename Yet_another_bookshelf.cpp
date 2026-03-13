#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l=-1,r=-1;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                if(l==-1)
                l=i;
                else
                r=i;
            }
        }
        int result=0;
        for(int i=l;i<r;i++)
        {
            if(arr[i]==0)
            result++;
        }
        cout<<result<<endl;
    }
}