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
        vector<char> arr(m+1,'B');
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            int k=m+1-a;
            if(a<k)
            {
                if(arr[a]!='A')
                arr[a]='A';
                else
                arr[k]='A';
            }
            else
            {
                if(arr[k]!='A')
                arr[k]='A';
                else
                arr[a]='A';
            }
        }
        for(int i=1;i<=m;i++)
        cout<<arr[i];
        cout<<endl;
    }
}