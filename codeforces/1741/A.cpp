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
void solve()
{
	string a,b;
	cin >> a >> b;
	if ((a[a.size()-1] - 'A') > (b[b.size()-1] - 'A')){
		cout << "<";
	} else if ((a[a.size()-1] - 'A') < (b[b.size()-1] - 'A')) {
		cout << ">";
	} else {
		if (a[a.size()-1] == 'S'){
		if (a.size()>b.size()){
			cout << "<";
		} else if (a.size()<b.size()){
			cout << ">";
		} else {
			cout << "=";
		}} else {		if (a.size()>b.size()){
			cout << ">";
		} else if (a.size()<b.size()){
			cout << "<";
		} else {
			cout << "=";
		}}
		
	}
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