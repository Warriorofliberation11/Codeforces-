#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        long long c;
        cin>>n>>c>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int it:arr)
        {
            if(it>c)
            break;
            long long diff=c-it;
            long long  cnt=(diff>k)?k:diff;
            k-=cnt;
            c+=it+cnt;
        }
        cout<<c<<endl;
    }
}