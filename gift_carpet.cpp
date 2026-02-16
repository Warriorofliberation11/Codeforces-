#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string str="vika";
        int k=0;
        vector<string> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j][i]==str[k])
                {
                    k++;
                    break;
                }
            }
            if(k==4)
            break;
        }
        if(k==4)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}