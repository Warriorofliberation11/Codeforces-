#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int right=n-1,left=0;
    while(left<n && arr[left]<=k)
    left++;
    while(right>left && arr[right]<=k)
    right--;
    cout<<left+n-1-right<<endl;
}