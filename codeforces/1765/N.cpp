/*
Templete by norman/KNN-07
*/
#include <bits/stdc++.h>
using namespace std;
#define el '\n'
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define fi first
#define nd second
#define forinc(i, a, b) for (int i = a; i <= b; i++)
#define fordec(i, a, b) for (int i = a; i >= b; i--)
#define alle(x) (x).begin(), (x).end()
#define ralle(x) (x).rbegin(), (x).rend()
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
const string taskname = "";
const bool tc = true;

void solve()
{
    string x;
    cin >> x;
    int k;
    cin >> k;
    int n = x.size();
    vector<vector<int>> pos(10);
    for (int i = 0; i < n; ++i)
        pos[x[i] - '0'].push_back(i);
    for (int i = 0; i < 10; ++i)
        reverse(pos[i].begin(), pos[i].end());
    string ans;
    int lst = 0, len = n - k;
    for (int i = 0; i < len; ++i)
    {
        for (int d = (i == 0); d <= 9; ++d)
        {
            while (!pos[d].empty() && pos[d].back() < lst)
                pos[d].pop_back();
            if (!pos[d].empty() && pos[d].back() - lst <= k)
            {
                ans += d + '0';
                k -= pos[d].back() - lst;
                lst = pos[d].back() + 1;
                break;
            }
        }
    }
    cout << ans;
}

int main()
{
    if (fopen((taskname + ".inp").c_str(), "r"))
    {
        freopen((taskname + ".inp").c_str(), "r", stdin);
        freopen((taskname + ".out").c_str(), "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tsc = 1;
    if (tc)
    {
        cin >> tsc;
    }
    while (tsc--)
    {
        solve();
        cout << el;
    }
}