#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str="";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                str+=(char)('a'+j);
            }
        }
        cout<<str<<endl;
    }
}