#include<bits/stdc++.h>
using namespace std;
bool uppercase(char k)
{
    return k>=65 && k<=90;
}
bool lowercase(char k)
{
    return k>=97 && k<=122;
}
int main()
{
    string word;
    cin>>word;
    int cnt=0;
    int i=1,n=word.size();
    while(i<n)
    {
        if(uppercase(word[i]))
        cnt++;
        i++;
    }
    if(cnt==n-1)
    {
        if(lowercase(word[0]))
        word[0]=toupper(word[0]);
        else
        word[0]=tolower(word[0]);
        int i=1;
        while(i<n)
        {
            word[i]=tolower(word[i]);
            i++;
        }
    }
    cout<<word;
}