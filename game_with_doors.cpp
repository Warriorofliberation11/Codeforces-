#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int a,b;
        cin>>a>>b;
        if(l>b || a>r)
        cout<<1<<endl;
        else 
        {
            int start=(a>l || l>a)?1:0;
            int end=(b<r || r<b)?1:0;
            cout<<min(min(r-l,b-a),min(b-l,r-a))+start+end<<endl;
        }
    }
}