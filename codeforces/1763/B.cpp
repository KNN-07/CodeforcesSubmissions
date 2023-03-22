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
    int n, k;
    cin >> n >> k;
    vi h(n), p(n), id(n);
    iota(alle(id), 0);
    for (auto &x : h)
        cin >> x;
    for (auto &x : p)
        cin >> x;
    sort(alle(id), [&](const int &x, const int &y)
         { return p[x] < p[y]; });
    int currentdamage = 0;
    for (auto i : id)
    {
        if (h[i] <= currentdamage)
            continue;
        if (i != *id.begin())
            k -= p[i];
        if (k > 0)
        {
            currentdamage += k;
            while (h[i] > currentdamage)
            {
                k -= p[i];
                if (k < 0)
                    break;
                currentdamage += k;
            }
        }
        if (h[i] > currentdamage)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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