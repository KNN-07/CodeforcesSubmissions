/*
Templete by norman/KNN-07
*/
#include <bits/stdc++.h>
using namespace std;
#define el endl
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define fi first
#define nd second
#define forinc(i, a, b) for (int i = a; i <= b; i++)
#define fordec(i, a, b) for (int i = a; i >= b; i--)
#define mms(a, v) memset(a, v, sizeof(a))
#define lwb(a, v) lower_bound(a.begin(), a.end(), v)
#define upb(a, v) upper_bound(a.begin(), a.end(), v)
typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef vector<bool> vb;
typedef unordered_set<char> chrset;

void solve()
{
    int a, check = 1;
    cin >> a;
    string s[2];
    cin >> s[0];
    cin >> s[1];
    for (int i = 0; i < a; i++)
    {
        if (s[0][i] == s[1][i] ||
            s[0][i] == 'G' && s[1][i] == 'B' ||
            s[0][i] == 'B' && s[1][i] == 'G')
        {
            check = 0;
        }
        else
        {
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    // stdin
    //  freopen("<file name insert>.inp", "r", stdin);
    //  freopen("<file name insert>.out", "w", stdout);
    //  Code here
    int n;
    cin >> n;
    while (n--)
    {
        solve();
        cout << el;
    }
}