#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int left=1,right=n;
        bool p=false;
        while(left<=right)
        {
            if(p)
            cout<<left++<<" ";
            else
            cout<<right--<<" ";
            p=!p;
        }
        cout<<endl;
    }
}