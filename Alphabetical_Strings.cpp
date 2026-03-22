#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,str="";
        cin>>s;
        char ch='a';
        bool k=true;
        while(s!=str)
        {
            string temp1=str+ch;
            string temp2=ch+str;
            ch++;
            if(s.find(temp1)!=string::npos)
            str=temp1;
            else if(s.find(temp2)!=string::npos)
            str=temp2;
            else
            {
                k=false;
                break;
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}