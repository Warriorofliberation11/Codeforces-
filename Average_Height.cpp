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
        stack<int> odd,even;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            even.push(a);
            else
            odd.push(a);
        }
        while(!odd.empty())
        {
            cout<<odd.top()<<" ";
            odd.pop();
        }
        while(!even.empty())
        {
            cout<<even.top()<<" ";
            even.pop();
        }
        cout<<endl;
    }
}