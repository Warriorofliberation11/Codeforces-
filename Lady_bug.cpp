#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int odd=0,even=0;
        bool k=true;
        for(int i=0;i<n;i++)
        {
            if(s2[i]=='0')
            {
                if(i%2==0)
                even++;
                else
                odd++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1')
            {
                if(i%2==1)
                {
                    if(even==0)
                    {
                        k=false;
                        break;
                    }
                    else
                    even--;
                }
                else
                {
                    if(odd==0)
                    {
                        k=false;
                        break;
                    }
                    else
                    odd--;
                }
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}