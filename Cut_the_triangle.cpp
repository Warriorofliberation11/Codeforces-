#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        unordered_map<int,int> mp1,mp2;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        mp1[x1]++;
        mp1[x2]++;
        mp1[x3]++;
        mp2[y1]++;
        mp2[y2]++;
        mp2[y3]++;
        if(mp1.size()==2 && mp2.size()==2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}