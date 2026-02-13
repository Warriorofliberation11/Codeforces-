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
        string str;
        cin>>str;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,str[i]-96);
        }
        cout<<maxi<<endl;
    }
}