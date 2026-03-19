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
        priority_queue<int> pq;
        for(int i=0;i<n-1;i++)
        {
            int a;
            cin>>a;
            pq.push(a);
        }
        int a;
        cin>>a;
        cout<<a+pq.top()<<endl;
    }
}