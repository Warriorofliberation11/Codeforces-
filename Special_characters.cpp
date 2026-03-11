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
        if(n%2==1)
        cout<<"NO"<<endl;
        else
        {
            string str="";
            char ch='A';
            while(n>0)
            {
                str+=ch;
                str+=ch;
                n-=2;
                ch++;
            }
            cout<<"YES"<<endl<<str<<endl;
        }
    }
}