#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,i=1,total=0,cnt=0;
        cin>>s;
        while(total<s)
        {
            total+=i;
            cnt++;
            i+=2;
        }
        cout<<cnt<<endl;
    }
}