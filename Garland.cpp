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
        unordered_map<char,int> mp;
        for(char i:s)
        mp[i]++;
        if(mp.size()==1)
        cout<<-1<<endl;
        else if(mp.size()==2)
        {
            int maxi=0;
            for(auto it: mp)
            {
                maxi=max(maxi,it.second);
            }
            if(maxi==3)
            cout<<6<<endl;
            else
            cout<<4<<endl;
        }
        else
        cout<<4<<endl;

    }
}