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
const int MAXN = 2 * 1e5 + 5;
int arr[MAXN], lastapr[MAXN];
bool iscpr(int a, int b)
{
    if (__gcd(a, b) == 1)
    {
        return true;
    }
    return false;
}
void solve()
{
    mms(lastapr, -1);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        lastapr[arr[i]] = i;
    }
    int res = -1;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (!iscpr(i, j))
                continue;
            if (lastapr[i] == -1 || lastapr[j] == -1)
                continue;
            res = max(res, lastapr[i] + lastapr[j]);
        }
    }
    cout << res;
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