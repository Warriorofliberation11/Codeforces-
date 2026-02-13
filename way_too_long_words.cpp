#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string word;
        cin>>word;
        int n=word.size();
        if(n<=10)
        cout<<word<<endl;
        else
        {
            string str="";
            str+=word[0];
            str+=to_string(n-2);
            str+=word[n-1];
            cout<<str<<endl;
        }
    }
}