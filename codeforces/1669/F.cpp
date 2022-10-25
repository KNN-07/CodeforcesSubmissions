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
    vll arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, r = n - 1;
    ll s1 = arr[0], s2 = arr[n - 1];
    ll ans = 0;
    while (l < r)
    {
        if (s1 == s2)
            ans = max(ans, (l + n - r + 1));
        if (s1 <= s2)
        {
            l++;
            s1 += arr[l];
        }
        else if (s1 > s2)
        {
            r--;
            s2 += arr[r];
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