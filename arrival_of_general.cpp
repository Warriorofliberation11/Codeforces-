#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxi=INT_MIN,mini=INT_MAX,maxindex=-1,minindex=-1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(maxi<a)
        {
            maxi=a;
            maxindex=i;
        }
        if(mini>=a)
        {
            mini=a;
            minindex=i;
        }
    }
    int result=(n-minindex-1)+maxindex;
    if(minindex<maxindex)
    cout<<result-1;
    else
    cout<<result;
}