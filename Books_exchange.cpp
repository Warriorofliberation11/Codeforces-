#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            int index=i,cnt=1;
            while(arr[index]!=i+1)
            {
                index=arr[index]-1;
                cnt++;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
}