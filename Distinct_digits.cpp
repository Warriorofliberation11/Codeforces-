#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    bool check=false;
    while(l<=r)
    {
        int k=l;
        set<int> st;
        bool p=true;
        while(k>0)
        {
            if(st.find(k%10)!=st.end())
            {
                p=false;
                break;
            }
            st.insert(k%10);
            k=k/10;
        }
        if(p)
        {
            check=true;
            break;
        }
        l++;
    }
    if(check)
    cout<<l<<endl;
    else
    cout<<-1<<endl;
}