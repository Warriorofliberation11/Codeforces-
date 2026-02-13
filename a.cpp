#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.size();
    set<char> st={'#','&','@','$','^','*',')','('};
    for(int i=0;i<n/2;i++)
    {
        if(st.find(a[i])==st.end())
        { 
            char k=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=k;
        }
    }
    cout<<a;
}