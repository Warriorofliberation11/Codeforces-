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
        if(n%7==0)
        cout<<n<<endl;
        else
        {
            int i=n-(n%7),j=i+7,cnt=0;
            string str=to_string(n),str1=to_string(i);
            for(int k=0;k<str.size();k++)
            {
                if(str[k]!=str1[k])
                cnt++;
            }
            if(cnt==1)
            cout<<i<<endl;
            else
            cout<<j<<endl;
        }
    }
}