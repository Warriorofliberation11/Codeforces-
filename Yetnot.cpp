#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        vector<int> low,up;
        int n=str.size();
        for(int i=0;i<n;i++)
        {
            if(str[i]=='B')
            {
                if(!up.empty())
                up.pop_back();
            }
            else if(str[i]=='b')
            {
                if(!low.empty())
                low.pop_back();
            }
            else if(str[i]>=97 && str[i]<=122)
            low.push_back(i);
            else
            up.push_back(i);
        }
        int i=0,j=0;
        for(int k=0;k<n;k++)
        {
            if(str[k]=='B' || str[k]=='b')
            continue;
            else
            {
                if(str[k]>=97 && str[k]<=122)
                {
                    if(i<low.size() && low[i]==k)
                    {
                        cout<<str[k];
                        i++;
                    }
                }
                else
                {
                    if(j<up.size() && up[j]==k)
                    {
                        cout<<str[k];
                        j++;
                    }
                }
            }
        }
        cout<<endl;
    }
}