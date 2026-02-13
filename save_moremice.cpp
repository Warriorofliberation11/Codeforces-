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
        vector<int> arr(k);
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        int i=0,cnt=0;
        long long cat=0;
        while(i<k && arr[i]>cat)
        {
            cnt++;
            cat+=(n-arr[i]);
            i++;
        }
        cout<<cnt<<endl;
    }
}