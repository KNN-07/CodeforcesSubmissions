#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 6;
string s;

struct Node
{
    int optimal;
    int open;
    int close;

    Node() {}

    Node(int opt, int o, int c)
    { // Khởi tạo struct Node
        optimal = opt;
        open = o;
        close = c;
    }
};
Node st[MAXN * 4];

Node operator+(const Node &left, const Node &right)
{
    Node res;
    // min(số dấu "(" thừa ra ở cây con trái, và số dấu ")" thừa ra ở cây con phải)
    int tmp = min(left.open, right.close);

    // Để xây dựng kết quả tối ưu ở nút id, ta nối dãy ngoặc tối ưu ở 2 con, rồi thêm
    // min(số "(" thừa ra ở con trái, số ")" thừa ra ở con phải).
    res.optimal = left.optimal + right.optimal + tmp * 2;

    res.open = left.open + right.open - tmp;
    res.close = left.close + right.close - tmp;

    return res;
}

void build(int id, int l, int r)
{
    if (l == r)
    {
        // Đoạn [l, r] chỉ có 1 phần tử.
        if (s[l] == '(')
            st[id] = Node(0, 1, 0);
        else
            st[id] = Node(0, 0, 1);
        return;
    }
    int mid = (l + r) / 2;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);

    st[id] = st[id * 2] + st[id * 2 + 1];
}

Node query(int id, int l, int r, int u, int v)
{
    if (v < l || r < u)
    {
        // Trường hợp không giao nhau
        return Node(0, 0, 0);
    }
    if (u <= l && r <= v)
    {
        // Trường hợp [l, r] nằm hoàn toàn trong [u, v]
        return st[id];
    }

    int mid = (l + r) / 2;
    return query(id * 2, l, mid, u, v) + query(id * 2 + 1, mid + 1, r, u, v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> s;
    int n = s.size();
    s = "%" + s;
    build(1, 1, n);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(1, 1, n, l, r).optimal << '\n';
    }
}