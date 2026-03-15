#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a-1;
    }
    bool k=false;
    for(int i=0;i<n;i++)
    {
        if(arr[arr[arr[i]]]==i)
        {
            k=true;
            break;
        }
    }
    if(k)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}