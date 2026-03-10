#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(3,0);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i%3]+=a;
    }
    int maxi=max(arr[0],max(arr[1],arr[2]));
    if(arr[0]==maxi)
    cout<<"chest"<<endl;
    else if(arr[1]==maxi)
    cout<<"biceps"<<endl;
    else
    cout<<"back"<<endl;
}