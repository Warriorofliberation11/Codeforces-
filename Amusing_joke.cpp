#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1=s1+s2;
    if(s1.size()!=s3.size())
    {
        cout<<"NO";
    }
    else
    {
        sort(s1.begin(),s1.end());
        sort(s3.begin(),s3.end());
        for(int i=0;i<s3.size();i++)
        {
            if(s1[i]!=s3[i])
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
}