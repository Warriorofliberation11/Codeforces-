#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n1=a.size()-1,n2=b.size()-1;
        if(a[n1]<b[n2])
        cout<<'>'<<endl; 
        else if(a[n1]>b[n2])
        cout<<'<'<<endl;
        else
        {
            if(a[n1]=='S')
            {
                if(n1<n2)
                cout<<'>'<<endl;
                else if(n1>n2)
                cout<<'<'<<endl;
                else
                cout<<'='<<endl;
            }
            else if(a[n1]=='L')
            {
                if(n1<n2)
                cout<<'<'<<endl;
                else if(n1>n2)
                cout<<'>'<<endl;
                else
                cout<<'='<<endl;
            }
            else
            cout<<'='<<endl;
        }
    }
}