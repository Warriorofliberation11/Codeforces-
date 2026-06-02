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
        bool ispal=true;
        int i=0,j=s.size()-1,k=-1;
        int n=s.size();
        while(i<=j)
        {
            if(s[i]!=s[j])
            ispal=false;
            if(k==-1)
            {
                if(s[j]!='a')
                k=i;
                else if(s[i]!='a')
                k=j;
            }
            i++;
            j--;
        }
        if(ispal && k==-1)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            s.insert(s.begin()+k,'a');
            cout<<s<<endl;
        }
    }
}