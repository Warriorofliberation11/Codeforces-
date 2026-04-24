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
        int ones=0,cnt=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            ones++;
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a!=arr[i])
            cnt++;
            if(a==1)
            ones--;
        }
        int a=abs(ones);
        if(cnt-a>0)
        cout<<a+1<<endl;
        else
        cout<<a<<endl;
    }
}