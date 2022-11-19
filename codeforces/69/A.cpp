#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sx=0,sy=0,sz=0;
    while (n--){
        long long x,y,z;
        cin >> x>>y>>z;
        sx+=x,sy+=y,sz+=z;
    }
    cout << ((sx == 0&&sy==0&&sz==0)? "YES" : "NO");
}