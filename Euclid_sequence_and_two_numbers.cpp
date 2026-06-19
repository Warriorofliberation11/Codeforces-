#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr.rbegin(),arr.rend());
        bool k=true;
        for(int i=2;i<n;i++)
        {
            if(arr[i]!=arr[i-2]%arr[i-1])
            {
                k=false;
                break;
            }
        }
        if(!k)
        cout<<-1<<endl;
        else
        cout<<arr[0]<<" "<<arr[1]<<endl;
    }
}