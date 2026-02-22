#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=1,j=n,res=abs(arr[j-1]-arr[i-1]);
    for(int k=1;k<n;k++)
    {
        int check=abs(arr[k]-arr[k-1]);
        if(res>check)
        {
            res=check;
            i=k;
            j=k+1;
        }
    }
    cout<<i<<" "<<j<<endl;
}