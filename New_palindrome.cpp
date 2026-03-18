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
        int i=0,j=s.size()-1;
        bool k=false;
        while(i<j)
        {
            if(i>0 && i!=j && s[i]!=s[i-1])
            {
                k=true;
                break;
            }
            i++;
            j--;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}