#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        bool check=false;
        for(int i=1;i<n;i++)
        {
            string a=s.substr(0,i);
            string b=s.substr(i);
            if(a[0]=='0' || b[0]=='0')
            continue;
            int x=stoi(a),y=stoi(b);
            if(y>x)
            {
                cout<<x<<" "<<y<<endl;
                check=true;
                break;
            }
        }
        if(!check)
        cout<<-1<<endl;
    }
}