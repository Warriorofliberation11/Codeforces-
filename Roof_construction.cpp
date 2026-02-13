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
        int k=floor(log2(n-1));
        int value=pow(2,k);
        for(int i=n-1;i>=value;i--)
        cout<<i<<" ";
        for(int i=0;i<value;i++)
        cout<<i<<" ";
        cout<<endl;
    }
}