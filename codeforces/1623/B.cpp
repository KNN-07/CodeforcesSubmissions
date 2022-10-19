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
const bool tc = true;
void solve()
{
    int n;
    cin >> n;
    set<pii> query;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        query.insert({x, y});
    }
    set<pii>::iterator ptr;
    for (ptr = query.begin(); ptr != query.end(); ptr++)
    {
        int a = ptr->fi, b = ptr->nd;
        if (a == b)
            cout << a << " " << b << " " << a << el;
        else
        {
            for (int i = a; i <= b; i++)
            {
                if ((i == a && query.find({i + 1, b}) != query.end()) ||
                    (i == b && query.find({a, i - 1}) != query.end()) ||
                    (query.find({a, i - 1}) != query.end() && query.find({i + 1, b}) != query.end()))
                {
                    cout << a << " " << b << " " << i << el;
                    break;
                }
            }
        }
    }
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