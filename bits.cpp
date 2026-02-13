#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    while(n--)
    {
        string word;
        cin>>word;
        if(word[0]=='X')
        {
            if(word[1]=='+')
            x+=1;
            else
            x-=1;
        }
        else
        {
            if(word[1]=='+')
            x+=1;
            else
            x-=1;
        }
    }
    cout<<x<<endl;
}