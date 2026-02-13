#include<bits/stdc++.h>
using namespace std;
    void k(string a,string b)
    {
        if(a.size()!=b.size())
        {
            cout<<"Not a anagram";
            return;
        }
        map<char,int> mp1,mp2;
        for(char i: a)
        mp1[i]++;
        for(char i: b)
        mp2[i]++;
        if(mp1.size()!=mp2.size())
        cout<<"Not a anagram";
        else
        {
            bool p=true;
            for(auto it: mp1)
            {
                if(it.second!=mp2[it.first])
                {
                    p=false;
                    break;
                }
            }
            if(p)
            cout<<"Anagram";
            else
            cout<<"Anagram";
        }
    }
int main()
{
    string a,b;
    cin>>a>>b;
    
    k(a,b);
}