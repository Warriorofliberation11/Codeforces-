#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int a;
    cin>>a;
    while(sum(a)%4!=0)
    {
        a++;
    }
    cout<<a<<endl;
}