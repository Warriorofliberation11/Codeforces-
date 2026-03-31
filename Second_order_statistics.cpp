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
    bool k=true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            cout<<arr[i]<<endl;
            k=false;
            break;
        }
    }
    if(k)
    cout<<"NO"<<endl;
}