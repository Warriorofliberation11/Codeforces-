#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l_one=0,r_one=0;
    cin>>n;
    int m=n;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        l_one+=l,r_one+=r;
    }
    cout<<min(n-l_one,l_one)+min(n-r_one,r_one)<<endl;
}