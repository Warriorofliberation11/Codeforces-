#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int first=s*v1+2*t1,second=s*v2+2*t2;
    if(first<second)
    cout<<"First"<<endl;
    else if(second<first)
    cout<<"Second"<<endl;
    else
    cout<<"Friendship"<<endl;
}