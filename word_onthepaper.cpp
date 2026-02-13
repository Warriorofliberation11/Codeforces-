#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str="";
        for(int j=0;j<8;j++)
        {
            for(int i=0;i<8;i++)
            {
                char a;
                cin>>a;
                if(a!='.')
                str+=a;
            }
        }
        cout<<str<<endl;
    }
}