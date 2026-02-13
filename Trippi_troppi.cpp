#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin, s);

        int n = s.size(), i = 0;
        string str = "";

        while(i < n)
        {
            // skip spaces
            while(i < n && s[i] == ' ')
                i++;

            // first letter of a word
            if(i < n)
                str += tolower(s[i]);

            // skip the rest of the word
            while(i < n && s[i] != ' ')
                i++;
        }

        cout << str << endl;
    }
}
