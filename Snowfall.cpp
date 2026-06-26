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
        vector<int> six,three,two,none;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%6==0)
            six.push_back(a);
            else if(a%3==0)
            three.push_back(a);
            else if(a%2==0)
            two.push_back(a);
            else
            none.push_back(a);
        }
        for(int i: six)
        cout<<i<<" ";
        for(int i: three)
        cout<<i<<" ";
        for(int i: none)
        cout<<i<<" ";
        for(int i: two)
        cout<<i<<" ";
        cout<<endl;
    }
}