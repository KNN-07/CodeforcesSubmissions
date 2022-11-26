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
const string taskname = "";
const bool tc = true;

void solve()
{
    int n, k, r, c;
    cin >> n >> k >> r >> c;
    vector<vb> arr(n + 1, vb(n + 1, false));
    arr[r][c] = true;
    // x-y = r-c -> y = x+c-r
    forinc(j, -n * n, n * n)
    {
        forinc(i, 1, n)
        {
            int x = i + c - r + j * k;
            if (x <= n && x >= 1)
            {
                arr[i][x] = true;
                // cerr << i << " " << x << "\n";
            }
        }
    }

    forinc(i, 1, n)
    {
        forinc(j, 1, n) cout << ((arr[i][j]) ? "X" : ".");
        cout << '\n';
    }
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
        // cout << el;
    }
}