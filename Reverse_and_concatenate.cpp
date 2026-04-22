#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool pal=true;
        int i=0,j=s.size()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                pal=false;
                break;
            }
            i++;
            j--;
        }
        if(pal)
        cout<<1<<endl;
        else
        {
            if(k==0)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
    }
}