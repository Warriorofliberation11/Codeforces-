#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str="codeforces";
    while(t--)
    {
        char c;
        cin>>c;
        if(str.find(c)!=string::npos)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}