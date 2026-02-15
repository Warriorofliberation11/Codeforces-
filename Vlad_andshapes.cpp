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
        vector<string> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int prev=0;
        bool k=true;
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=0;j<n;j++)
            {
                temp+=(arr[i][j]-'0');
            }
            if(temp==prev && temp!=0)
            {
                k=false;
                break;
            }
            prev=temp;
        }
        if(k)
        cout<<"TRIANGLE"<<endl;
        else
        cout<<"SQUARE"<<endl;
    }
}