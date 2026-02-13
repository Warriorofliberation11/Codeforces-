#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int jump=1;
        int start=1;
        for(int i=0;i<k;i++)
        {
            cout<<start<<" ";
            if(n-(start+jump)>=k-i-2)
            {
                start+=jump;
                jump++;
            }
            else
            start++;
        }
        cout<<endl;
    }
}