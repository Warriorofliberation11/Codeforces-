#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool ispal=true;
        for(int k=0;k<=s.size()/2;k++)
        {
            string str=s;
            str.insert(str.begin()+k,'a');
            int i=0,j=str.size()-1;
            bool check=true;
            while(i<j)
            {
                if(str[i]!=str[j])
                {
                    check=false;
                    break;
                }
                i++;
                j--;
            }
            if(!check)
            {
                s=str;
                ispal=false;
                break;
            }
        }
        if(!ispal)
        cout<<"YES"<<endl<<s<<endl;
        else
        cout<<"NO"<<endl;
    }
}