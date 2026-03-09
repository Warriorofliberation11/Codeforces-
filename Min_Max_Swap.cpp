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
        vector<int> a(n),b(n);
        int maxi1=INT_MIN,maxi2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]>b[i])
            {
                maxi1=max(maxi1,a[i]);
                maxi2=max(maxi2,b[i]);
            }
            else
            {
                maxi1=max(maxi1,b[i]);
                maxi2=max(maxi2,a[i]);
            }
        }
        cout<<maxi1*maxi2<<endl;    
    }
}