#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==1 || n<=4)
    cout<<0<<endl;
    else
    cout<<ceil((double)n/4)-1<<endl;
}