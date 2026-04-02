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
        int a=4*n-2;
        if(k<=a-2)
        cout<<(k+1)/2<<endl;
        else if(k==a-1)
        cout<<2*n-1<<endl;
        else
        cout<<2*n<<endl;
    }
}