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
        string s;
        cin>>s;
        int i=n-1,maxi=0;
        while(i>=0)
        {
            int j=i;
            while(j>=0 && s[j]=='P')
            j--;
            if(j>=0)
            maxi=max(maxi,i-j);
            i=j-1;
        }
        cout<<maxi<<endl;
    }
}