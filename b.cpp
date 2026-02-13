#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={3,46, 23,32,5};
    sort(arr.begin(),arr.end());
    int key=5;
    int i=0,j=arr.size()-1;
    while(i<j)
    {
        int mid=(i+j)/2;
        if(arr[mid]>key)
        {
            j=mid-1;
        }
        else if(arr[mid]<key)
        {
            i=mid+1;
        }
        else
        {
            break;
        }
    }
    cout<<i;
}