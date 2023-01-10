#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i], a[i] = a[i - 1] + a[i];
        cout << *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()) << '\n';
    }
}