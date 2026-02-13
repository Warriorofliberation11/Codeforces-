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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int i=1,cnt=0,prev=a[0];
        while(i<n)
        {
            while(i<n && a[i]-prev<=1)
            {
                cnt++;
                i++;
            }
            prev=a[i];
            i++;
        }
        cout<<n-cnt<<endl;
    }
}