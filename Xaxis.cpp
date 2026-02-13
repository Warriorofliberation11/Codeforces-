#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,x3,result=INT_MAX;
        cin>>x1>>x2>>x3;
        int start=min(x1,min(x2,x3)),end=max(x1,max(x2,x3));
        while(start<=end)
        {
            result=min(result,abs(start-x1)+abs(start-x2)+abs(start-x3));
            start++;
        }
        cout<<result<<endl;
    }
}