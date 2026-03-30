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
        vector<int> arr(26,0);
        for(char it:s)
        {
            arr[it-97]++;
        }
        string str="";
        for(int i=25;i>=0;i--)
        {
            if(arr[i]==0)
            continue;
            for(int j=0;j<arr[i];j++)
            str+=char('a'+i);
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
            continue;
            for(int j=0;j<arr[i];j++)
            str+=char('a'+i);
        }
        cout<<str<<endl;
    }
}