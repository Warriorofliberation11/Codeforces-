#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        bool used=false;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i=0;
        while(i<n)
        {
            if(arr[i]==1)
            {
                if(!used)
                {
                    used=true;
                    i+=x;
                }
                else
                break;
            }
            else
            i++;
        }
        if(i>=n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}