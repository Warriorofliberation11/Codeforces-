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
        vector<int> arr(n);
        int a;
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
           if(i==0)
           a=arr[i];
           else
           a=a&arr[i];
        }
        if(a!=0)
        {
            cout<<1<<endl;
            continue;
        }
        int k=-1,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(k==-1)
            k=arr[i];
            else
            k=k&arr[i];
            if(k==a)
            {
                cnt++;
                k=-1;
            }
        }
        cout<<cnt<<endl;
    }
}