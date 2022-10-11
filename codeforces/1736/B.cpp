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
ll gcd(ll a,ll b){
	while(b!=0){
		ll r = a%b;
		a=b;
		b=r;
	}
	return a;
}
ll gcd3(ll a,ll b,ll c){
	return gcd(gcd(a,b),c);
}
void solve()
{
	int n;
	cin >> n;
	int a[n];
	mms(a,0);
	for (int i = 0;i<n;i++){
		cin >> a[i];
	}
	if (n<3) {cout << "YES";return;}
	for (int i = 2;i<n;i++){
		if (gcd(a[i], a[i-2]) != gcd3(a[i], a[i-1], a[i-2])){
			cout << "NO";
			return;
		}
	}
	cout << "YES";
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
    if (tc){
    cin >> n;}
    while (n--)
    {
        solve();
        cout << el;
    }
}