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
        int even=INT_MAX,odd=INT_MAX,o=-1,e=-1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i%2==0)
            {
                if(even>a)
                {
                    even=a;
                    e=i;
                }
            }
            else
            {
                if(odd>a)
                {
                    odd=a;
                    o=i;
                }
            }
        }
        if(n%2==1)
        cout<<"Mike"<<endl;
        else
        {
            if(even<odd)
            cout<<"Joe"<<endl;
            else if(odd<even)
            cout<<"Mike"<<endl;
            else
            {
                if(e<o)
                cout<<"Joe"<<endl;
                else
                cout<<"Mike"<<endl;
            }
        }
    }
}