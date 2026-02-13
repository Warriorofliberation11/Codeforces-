#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double result=0;
    for(int i=0;i<n;i++)
    {
        double a;
        cin>>a;
        result+=(a/100);
    }
    cout<<(result/n)*100;
}