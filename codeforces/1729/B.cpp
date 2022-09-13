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

void solve()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    string ans = "";
    // while (n != 0)
    // {
    //     int tmp = n % 10;
    //     if (tmp != 0)
    //     {
    //         char tmp2 = int('a') + tmp - 1;
    //         ans += tmp2;
    //         n /= 10;
    //     }
    //     else
    //     {
    //         tmp = n % 1000;
    //         tmp /= 10;
    //         char tmp2 = int('a') + tmp - 1;
    //         ans += tmp2;
    //         n /= 1000;
    //     }
    // }
    int tmp;
    for (int i = t - 1; i >= 0;)
    {
        if (s[i] == '0')
        {
            tmp = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            i = i - 3;
        }
        else
        {
            tmp = s[i] - '0';
            i--;
        }
        ans += char(tmp + 'a' - 1);
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    // cout << char(int('a')+15-1);
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