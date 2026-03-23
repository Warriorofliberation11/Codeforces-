#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.find("FFT")==string::npos && s.find("NTT")==string::npos)
        cout<<s<<endl;
        else
        {
            int n=s.size();
            unordered_map<char,int> mp;
            for(int i=0;i<n;i++)
            {
                mp[s[i]]++;
            }
            string str="";
            while(mp['T']>0)
            {
                mp['T']--;
                str+='T';
            }
            for(auto it: mp)
            {
                while(it.second!=0)
                {
                    it.second--;
                    str+=it.first;
                }
            }
            cout<<str<<endl;
        }
    }
}