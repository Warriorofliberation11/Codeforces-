#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a,b;
        cin>>a>>b;
        long long ans=1;
        int small=min(a,b);
        while(small>1)
        {
            ans*=small;
            small--;
        }
        cout<<ans<<endl;
}