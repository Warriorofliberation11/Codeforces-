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
        int i=1,j=3*n-1;
        while(i<j)
        {
            cout<<j+1<<" "<<j<<" "<<i<<" ";
            j-=2;
            i++;
        }
        cout<<endl;
    }
}