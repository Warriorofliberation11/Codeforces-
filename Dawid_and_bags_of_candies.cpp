#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(4);
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr.begin(),arr.end());
    if(arr[0]+arr[1]+arr[2]==arr[3] || arr[0]+arr[3]==arr[1]+arr[2])
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}