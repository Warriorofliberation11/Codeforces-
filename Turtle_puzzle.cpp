#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,total=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            total+=abs(a);
        }
        cout<<total<<endl;
    }
}