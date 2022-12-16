#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int c1 = count(s.begin(), s.end(), '1');
    for (int i = (1LL << c1); i <= (1LL << n) - (1LL << (s.size() - c1)) + 1; i++)
        cout << i << ' ';
}