#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==-1)
        {
            if(p>0)
            p--;
            else
            cnt++;
        }
        else
        p+=a;
    }
    cout<<cnt;
}