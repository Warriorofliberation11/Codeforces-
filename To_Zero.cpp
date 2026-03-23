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
        int cnt=0;
        if(n%2==1)
        {
            if(k%2==1)
            {
                n-=k;
                k--;
            }
            else
            n-=k-1;
            cnt++;
        }
        else
        {
            if(k%2==1)
            k--;
        }
        cout<<cnt+(n+k-1)/k<<endl;
    }
}