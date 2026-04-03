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
        int index=-1;
        for(int i=1;i<s.size();i++)
        {
            if((s[i]=='a' && s[i-1]=='b') || (s[i]=='b' && s[i-1]=='a'))
            {
                index=i;
                break;
            }
        }
        if(index!=-1)
        cout<<index<<" "<<index+1<<endl;
        else
        cout<<-1<<" "<<-1<<endl;
    }
}