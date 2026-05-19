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
        int i=0,j=n-1;
        int v=1;
        bool k=true;
        while(i<=j)
        {
            if(k)
            arr[i++]=v++;
            else
            arr[j--]=v++;
            k=!k;
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}