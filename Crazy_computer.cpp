#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int cnt=1,prev=-1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(i!=0)
        {
            if(a-prev<=c)
            cnt++;
            else
            cnt=1;
        }
        prev=a;
    }
    cout<<cnt<<endl;
}