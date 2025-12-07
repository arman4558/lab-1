#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s, t;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            t += s[i];
    }
    string u = t;
    reverse(t.begin(), t.end());

    if (u == t)
        cout << "Palindrom";
    else
        cout << "Not Palindrom";
}