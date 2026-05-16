#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        int a=1;
        while((a&x)==0 || (a^x)==0)
        {
            a++;
        }
        cout<<a<<endl;
    }
}