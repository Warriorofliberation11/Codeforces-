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
        vector<int> x(n-1);
        for(int i=0;i<n-1;i++)
        cin>>x[i];
        int prev=*max_element(x.begin(),x.end())+1;
        cout<<prev<<" ";
        for(int i=0;i<n-1;i++)
        {
            prev+=x[i];
            cout<<prev<<" ";
        }
        cout<<endl;
    }
}