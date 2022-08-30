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

int solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans[5] = {0};
    if (n > 5)
    {
        cout << "NO" << el;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
        {
            ans[0] = 1;
        }
        if (s[i] == 'i')
        {
            ans[1] = 1;
        }
        if (s[i] == 'm')
        {
            ans[2] = 1;
        }
        if (s[i] == 'u')
        {
            ans[3] = 1;
        }
        if (s[i] == 'r')
        {
            ans[4] = 1;
        }
    }
    for (auto x : ans)
    {
        if (x == 0)
        {
            cout << "NO" << el;
            return 0;
        }
    }
    cout << "YES" << el;
    return 0;
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
        
    }
}