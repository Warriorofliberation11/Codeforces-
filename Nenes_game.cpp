#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,q;
        cin>>k>>q;
        vector<int> arr(k);
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<q;i++)
        {
            int n;
            cin>>n;
            for(int j=k-1;j>=0;j--)
            {
                while(arr[j]<=n)
                n-=j+1;
            }
            cout<<n<<" ";
        }
        cout<<endl;
    }
}