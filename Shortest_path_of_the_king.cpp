#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    vector<int> dir={-1,0,1};
    vector<string> ans;
    while(s!=t)
    {
        int c=s[0]-'a',d=s[1]-'1';
        int dc=t[0]-'a',dd=t[1]-'1';
        int k=INT_MAX,addi=-1,addj=-1;
        for(int i:dir)
        {
            for(int j:dir)
            {
                int newi=i+c,newj=j+d;
                int val=abs(newi-dc)+abs(newj-dd);
                if(val<k)
                {
                    k=val;
                    addi=i;
                    addj=j;
                }
            }
        }
        s[0]=s[0]+addi;
        s[1]=s[1]+addj;
        if(addi==-1 && addj==1)
        ans.push_back("LU");
        else if(addi==-1 && addj==0)
        ans.push_back("L");
        else if(addi==-1 && addj==-1)
        ans.push_back("LD");
        else if(addi==0 && addj==1)
        ans.push_back("U");
        else if(addi==0 && addj==-1)
        ans.push_back("D");
        else if(addi==1 && addj==1)
        ans.push_back("RU");
        else if(addi==1 && addj==0)
        ans.push_back("R");
        else
        ans.push_back("RD");
    }
    cout<<ans.size()<<endl;
    for(string i: ans)
    {
        cout<<i<<endl;
    }
}