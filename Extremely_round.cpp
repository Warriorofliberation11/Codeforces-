#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        if(n<=10)
        cout<<n<<endl;
        else
        {
            int cnt=9,p=10;
            bool k=true;
            while(k)
            {
                for(int i=1;i<=9;i++)
                {
                    if(p*i>n)
                    {
                        k=false;
                        break;
                    }
                    cnt++;
                }
                p=p*10;
            }
            cout<<cnt<<endl;
        }
    }
}