/*
Templete by norman/KNN-07
*/
#include <bits/stdc++.h>
using namespace std;
#define el '\n'
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define fi first
#define nd second
#define forinc(i, a, b) for (int i = a; i <= b; i++)
#define fordec(i, a, b) for (int i = a; i >= b; i--)
#define alle(x) (x).begin(), (x).end()
#define ralle(x) (x).rbegin(), (x).rend()
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
const string taskname = "";
const bool tc = false;

const int N = 1e5 + 6;
ll dist[N], trace[N];
bool visited[N];
vector<pll> adj[N];

void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    auto dijkstra = [&](ll x) -> void
    {
        mms(dist, 0x3f3f3f3f);
        mms(trace, -1);
        priority_queue<pll, vector<pll>, greater<pll>> pq;
        dist[x] = 0;
        pq.push({0, x});
        while (pq.size())
        {
            ll a = pq.top().second;
            pq.pop();
            if (visited[a])
                continue;
            visited[a] = true;
            for (auto p : adj[a])
            {
                ll b = p.fi, w = p.nd;
                if (dist[a] + w < dist[b])
                {
                    dist[b] = dist[a] + w;
                    pq.push({dist[b], b});
                    trace[b] = a;
                }
            }
        }
    };
    dijkstra(1);

    vi path;
    auto pathtrace = [&](ll s, ll u) -> void
    {
        if (u != s && trace[u] == -1)
        {
            path.pb(-1);
            return;
        }
        // Khu De Quy
        while (u != -1)
        {
            path.pb(u);
            u = trace[u];
        }
    };

    pathtrace(1, n);
    // cout << dist[n];
    reverse(alle(path));
    for (auto x : path)
        cout << x << ' ';
}

int main()
{
    if (fopen((taskname + ".inp").c_str(), "r"))
    {
        freopen((taskname + ".inp").c_str(), "r", stdin);
        freopen((taskname + ".out").c_str(), "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tsc = 1;
    if (tc)
    {
        cin >> tsc;
    }
    while (tsc--)
    {
        solve();
        cout << el;
    }
}