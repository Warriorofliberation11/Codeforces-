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
        string s;
        cin>>s;
        if(s.find("RL")!=-1)
        cout<<0<<endl;
        else
        {
            int rev=s.find("LR");
            if(rev!=-1)
            cout<<rev+1<<endl;
            else
            cout<<-1<<endl;
        }
    }
}