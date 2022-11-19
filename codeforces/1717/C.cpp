#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setiosflags(ios::fixed) << setprecision(15);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, i, j;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        a.push_back(a[0]);
        b.push_back(b[0]);
        for (i = 0; i < n; i++)
        {
            if (b[i] < a[i])
                break;
            if (b[i] == a[i])
                continue;
            if (b[i] > b[i + 1] + 1)
                break;
        }
        cout << ((i==n) ? "YES\n" : "NO\n");
    }
}