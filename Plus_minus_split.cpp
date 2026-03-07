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
        string s;
        cin>>s;
        int start=0;
        for(char i:s)
        {
            if(i=='+')
            start++;
            else
            start--;
        }
        cout<<abs(start)<<endl;
    }
}