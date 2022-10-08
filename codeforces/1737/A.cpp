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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ccount[26];
    mms(ccount, 0);
    for (int i = 0; i < n; i++)
    {
        ccount[s[i] - 'a']++; // Count the freq of the character
    }
    string ans = "";
    int lim = min(25, n / k);
    // iterate through n/k element or all the alphabet
    for (int i = 0; i < lim; i++)
    {
        while (k - ans.size() > ccount[i])
        {
            ans += (i + 'a');
        }
    }
    // if the current compartment didnt have the char add it
    char l = 'a' + lim;
    while (k > ans.size())
    {
        ans += l;
    }
    // add the last char?
    reverse(ans.begin(), ans.end());
    // reverse cuz we did it from right to left
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
    int n;
    cin >> n;
    while (n--)
    {
        solve();
        cout << el;
    }
}