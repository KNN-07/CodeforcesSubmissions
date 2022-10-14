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
bool tc = true;
string s[9];
bool rchk(int r)
{
    for (int i = 0; i < 8; i++)
    {
        if (s[i][r] != 'B')
        {
            return false;
        }
    }
    return true;
}
bool lchk(int l)
{
    for (int i = 0; i < 8; i++)
    {
        if (s[l][i] != 'R')
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    for (int i = 0; i < 8; i++)
    {
        cin >> s[i];
    }
    char ans;
    for (int i = 0; i < 8; i++)
    {
        if (rchk(i))
        {
            ans = 'B';
            break;
        }
        if (lchk(i))
        {
            ans = 'R';
            break;
        }
    }
    cout << ans;
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
    int n = 1;
    if (tc)
    {
        cin >> n;
    }
    while (n--)
    {
        solve();
        cout << el;
    }
}