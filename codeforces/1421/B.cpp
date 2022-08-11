#include <bits/stdc++.h>
using namespace std;
#define el endl
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define fi first
#define nd second
#define forinc(i, a, b) for(int i = a; i <= b; i++)
#define fordec(i, a, b) for(int i = a; i >= b; i--)
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

void solve(){
    int n, count = 0;
    cin >> n;
    char map[n][n];
    pii loc[2];
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cin >> map[r][c];
        }
    }
    if (map[0][1] == map[1][0])
    {
        if (map[n - 2][n - 1] == map[n - 1][n - 2] && map[0][1] != map[n - 2][n - 1]){
            cout << "0" << el;
        } else if (map[n - 2][n - 1] == map[n - 1][n - 2] && map[0][1] == map[n - 2][n - 1]){
            cout << "2" << el;
            cout << n-1 << " " << n << el;
            cout << n << " " << n-1 << el;
        } else if (map[n - 2][n - 1] != map[n - 1][n - 2]){
            if (map[n - 2][n - 1]==map[0][1]){
                cout << 1 << el;
                cout << n-1 << " " << n << el;
            } else {
                cout << 1 << el;
                cout << n << " " << n-1 << el;  
            }
        }
    }
    else {
        if (map[n - 2][n - 1] == map[n - 1][n - 2]){
            if (map[n - 1][n - 2] == map[0][1]) {
                cout << 1 << el;
                cout << 1 << " " << 2 << el;
            } else if (map[n - 1][n - 2] == map[1][0]) {
                cout << 1 << el;
                cout << 2 << " " << 1 << el;
            }
        }
        else {
            if (map[n - 1][n - 2] == map[0][1]) {
                cout << 2 << el;
                cout << 1 << " " << 2 << el;
                cout << n-1 << " "<< n << el;
            }
            if (map[n - 1][n - 2] == map[1][0]) {
                cout << 2 << el;
                cout << 2 << " " << 1 << el;
                cout << n-1 << " "<< n << el;
            }
        }
    }
}
int main(){
    int tc;
    cin >> tc;
    for (int c = 0; c < tc; c++) {
        solve();
    }
    return 0;
}