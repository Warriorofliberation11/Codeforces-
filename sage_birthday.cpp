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
    sort(arr.begin(),arr.end());
    if(n%2==1)
    cout<<n/2<<endl;
    else
    cout<<n/2-1<<endl;
    int i=0,j=n/2;
    while(i<n/2 && j<n)
    {
        cout<<arr[j]<<" ";
        cout<<arr[i]<<" ";
        i++;
        j++;
    }
    if(i<n/2)
    cout<<arr[i]<<endl;
    if(j<n)
    cout<<arr[j]<<endl;
}