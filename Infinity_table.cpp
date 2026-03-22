#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int i=1,inc=1,cnt=0;
        while(i<k)
        {
            i+=inc;
            inc+=2;
            cnt++;
        }
        if(i==k)
        cout<<1<<" "<<cnt+1<<endl;
        else
        {
            i-=(inc-2);
            int row=1,col=cnt;
            while(i!=k)
            {
                if(row==cnt)
                col--;
                else
                row++;
                i++;
            }
            cout<<row<<" "<<col<<endl;
        }
    }
}