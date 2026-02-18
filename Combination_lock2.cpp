#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<n;i++)
    {
        if(str1[i]!=str2[i])
        res+=min(abs(str1[i]-str2[i]),10-abs(str1[i]-str2[i]));
    }
    cout<<res<<endl;
}