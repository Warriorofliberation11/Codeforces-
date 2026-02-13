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
        string s;
        cin>>s;
        vector<int> arr(26,0);
        for(char i:s)
        {
            if(arr[i-'A']==0)
            {
                cnt+=2;
                arr[i-'A']=1;
            }
            else
            cnt++;
        }
        cout<<cnt<<endl;
    }
}