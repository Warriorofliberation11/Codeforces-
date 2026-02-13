#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        char c;
        cin>>a>>c;
        string s;
        cin>>s;
        s+=s;
        if(c=='g')
        {
            cout<<0<<endl;
            continue;
        }
        int fulfill=0,index,result=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c && fulfill==0)
            {
                index=i;
                fulfill=1;
            }
            if(s[i]=='g' && fulfill==1)
            {
                result=max(result,i-index);
                fulfill=0;
            }
        }
        cout<<result<<endl;
    }
}