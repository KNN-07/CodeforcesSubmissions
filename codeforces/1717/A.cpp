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

int gcd(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve()
{
    int n, c = 0;
    cin >> n;
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int p = i; p <= a; p++)
    //     {
    //         int x = (gcd(i, p));
    //         int y = (i * p);
    //         if (3*x*x>=y)
    //         {
    //             if (i == p)
    //                 c++;
    //             else
    //             {
    //                 c += 2;
    //             }
    //         }
    //     }
    // }
    // cout << c;
    cout << 2 * (n / 2) + 2 * (n / 3) + n;
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