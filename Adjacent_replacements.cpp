#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        if(a%2==0)
        a--;
        arr[i]=a;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}