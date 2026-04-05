#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    int a,b;
    cin>>a>>b;
    int sum=0;
    while(a!=b)
    {
        sum+=arr[a];
        a++;
    }
    cout<<sum<<endl;
}