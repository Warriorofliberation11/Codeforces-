#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int a31=a1+a2,a32=a4-a2;
        int score1=1,score2=1;
        if(a31+a2==a4)
        score1++;
        if(a31+a4==a5)
        score1++;
        if(a1+a2==a32)
        score2++;
        if(a32+a4==a5)
        score2++;
        cout<<max(score1,score2)<<endl;
    }
}