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
bool isPalin(string s)
{
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if (s1 == s)
    {
        return true;
    }
    else
        return false;
}
void solve()
{
    string s;
    cin >> s;
    if (!isPalin(s + 'a'))
    {
        cout << "YES"
             << "\n"
             << s << 'a';
    }
    else if (!isPalin('a' + s))
    {
        cout << "YES"
             << "\n"
             << 'a' << s;
    }
    else
        cout << "NO";
}

int main()
{
    // stdin
    //  freopen("<file name insert>.inp", "r", stdin);
    //  freopen("<file name insert>.out", "w", stdout);
    //  Code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
        cout << el;
    }
}