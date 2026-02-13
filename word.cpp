#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int n=word.size(),upper=0,lower=0;
    for(int i=0;i<n;i++)
    {
        if(word[i]>=65 && word[i]<=90)
        upper++;
        else
        lower++;
    }
    for(int i=0;i<n;i++)
    {
        if(lower>=upper && word[i]>=65 && word[i]<=90)
        word[i]=tolower(word[i]);
        if(lower<upper && word[i]>=97 && word[i]<=122)
        word[i]=toupper(word[i]);
    }
    cout<<word;
}