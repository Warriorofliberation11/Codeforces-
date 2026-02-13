#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,sum=0;
    cin>>n>>a;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int i=a-1,j=a+1;
    if(arr[a]==1)
    sum++;
    while(i>=1 && j<=n)
    {
        if(arr[i]==1 && arr[j]==1)
        sum+=2;
        i--;
        j++;
    }
    while(i>=1)
    {
        if(arr[i]==1)
        sum++;
        i--;
    }
    while(j<=n)
    {
        if(arr[j]==1)
        sum++;
        j++;
    }
    cout<<sum<<endl;
}