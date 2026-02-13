#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    vector<int> arr(7);
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
        x+=arr[i];
    }
    n=n%x;
    int i;
    if(n==0)
    {
        i=6;
        while(arr[i]==0)
        i--;
    }
    else
    {
        i=0;
        while(n>arr[i])
        {
            n-=arr[i];
            i++;
        }
    }
    cout<<i+1;
}