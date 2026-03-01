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
        deque<int> dq;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(!dq.empty() && dq.front()>a)
            dq.push_front(a);
            else
            dq.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            cout<<dq.front()<<" ";
            dq.pop_front();
        }
        cout<<endl;
    }
}