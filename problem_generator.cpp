#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum=0;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int> arr(7);
        for(int i=0;i<n;i++)
        arr[s[i]-'A']++;
        for(int i=0;i<7;i++)
        {
            if(arr[i]<m)
            sum+=(m-arr[i]);
        }
        cout<<sum<<endl;
    }
}