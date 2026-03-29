#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int v=100;
        while(k%2==0 && v%2==0)
        {
            k=k/2;
            v=v/2;
        }
        while(k%5==0 && v%5==0)
        {
            k=k/5;
            v=v/5;
        }
        cout<<v<<endl;
    }
}