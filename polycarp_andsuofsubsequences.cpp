#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> b(7);
        for(int i=0;i<7;i++)
        {
            cin>>b[i];
        }
        if(b[0]+b[1]+b[2]==b[6])
        cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
        else
        cout<<b[0]<<" "<<b[1]<<" "<<b[3]<<endl;
    }
}