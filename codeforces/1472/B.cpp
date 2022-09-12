#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, c1=0,c2=0;
    cin >> n;
    while (n--) {
        int tmp;
        cin >> tmp;
        if (tmp == 1) {
            c1++;
        } else {
            c2++;
        }
    }
    if ((2*c2+c1) % 2 != 0) {
        cout << "NO" << endl;
    } else {
        int sum = (2*c2+c1) / 2;
        if (sum % 2 == 0 || (sum % 2 == 1 && c1 != 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}