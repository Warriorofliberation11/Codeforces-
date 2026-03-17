#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> str(3);
        for(int i=0;i<3;i++)
        {
            cin>>str[i];
        }
        unordered_map<char,int> ans;
        for(int i=0;i<3;i++)
        {
            bool k=true;
            for(int j=1;j<3;j++)
            {
                if(str[i][j]!=str[i][j-1])
                {
                    k=false;
                    break;
                }
            }
            if(k)
            ans[str[i][0]]=1;
        }
        for(int j=0;j<3;j++)
        {
            bool k=true;
            for(int i=1;i<3;i++)
            {
                if(str[i][j]!=str[i-1][j])
                {
                    k=false;
                    break;
                }
            }
            if(k)
            ans[str[0][j]]=1;
        }
        if(str[0][0]==str[1][1] && str[1][1]==str[2][2])
        ans[str[0][0]]=1;
        if(str[0][2]==str[1][1] && str[1][1]==str[2][0])
        ans[str[1][1]]=1;
        if(ans['X']==1 && ans['+']==0 && ans['O']==0)
        cout<<'X'<<endl;
        else if(ans['+']==1 && ans['X']==0 && ans['O']==0)
        cout<<"+"<<endl;
        else if(ans['O']==1 && ans['X']==0 && ans['+']==0)
        cout<<"O"<<endl;
        else
        cout<<"DRAW"<<endl;
    }
}