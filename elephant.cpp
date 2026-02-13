#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,result=0;
    cin>>n;
    while(n>0)
    {
        n-=5;
        result++;
    }
    cout<<result;
}