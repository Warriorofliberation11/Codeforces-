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
        int limit=52;
        string str="";
        for(int i=0;i<3;i++)
        {
            char p='a';
            while((p-96)+limit<n)
            {
                p++;
            }
            str+=p;
            limit-=26;
            n-=(p-'a'+1);
        }
        cout<<str<<endl;
    }
}