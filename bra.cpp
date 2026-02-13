#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    bool k=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char a;
            cin>>a;
            if(a=='W' || a=='B' ||a=='G')
            continue;
            else
            k=false;
        }
    }
    if(k)
    cout<<"#Black&White"<<endl;
    else
    cout<<"#Color"<<endl;
}