#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mini=INT_MAX,maxi=INT_MIN,result=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==mini || a==maxi)
        continue;
        mini=min(a,mini);
        maxi=max(maxi,a);
        if(a==maxi || a==mini)
        result++;
    }
    cout<<result-1;
}