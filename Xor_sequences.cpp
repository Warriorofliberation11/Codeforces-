#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int i=0;
        while((x&(1<<i))==(y&(1<<i)))
        {
            i++;
        }
        cout<<(long long)pow(2,i)<<endl;
    }
}