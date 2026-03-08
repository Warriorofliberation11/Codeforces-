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
    int k=1,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=k)
        {
            k++;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}