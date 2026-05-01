#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            cnt++;
        }
        if(cnt==n)
        cout<<0<<endl;
        else
        {
            int i=0,j=n-1;
            while(j>=0 && arr[j]==0)
            j--;
            while(i<j && arr[i]==0)
            i++;
            bool k=false;
            while(i<=j)
            {
                if(arr[i]==0)
                {
                    k=true;
                    break;
                }
                i++;
            }
            if(k)
            cout<<2<<endl;
            else
            cout<<1<<endl;
        }
    }
}