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
        bool k=true;
        int prev;
        cin>>prev;
        vector<bool> arr(n,false);
        for(int i=1;i<n;i++)
        {
            int a;
            cin>>a;
            if(a-prev==2)
            {
                if(arr[i-1])
            }
            prev=a;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}