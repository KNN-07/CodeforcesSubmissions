#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string cmp = "hello";
    int l = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == cmp[l])
            l++, c++;
    }
    if (c != 5)
        cout << "NO";
    else
        cout << "YES";
}