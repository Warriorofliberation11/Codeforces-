#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int find=-1;
        vector<int> real(10,0),made(10,0);
        real[0]=3;
        real[1]=1;
        real[2]=2;
        real[3]=1;
        real[5]=1;
        bool m=true;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            made[a]++;
            bool k=true;
            for(int j=0;j<10;j++)
            {
                if(real[j]>made[j])
                k=false;
            }
            if(k && m)
            {
                find=i;
                m=false;
            }
        }
        if(m)
        cout<<0<<endl;
        else
        cout<<find+1<<endl;
    }
}