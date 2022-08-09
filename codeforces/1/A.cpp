#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m,a;
    cin >> n >> m >> a;
    ll r,c;
    if (n%a!=0){
        r = (n/a)+1;
    } else {
        r = n/a;
    }
    if (m%a!=0){
        c = (m/a)+1;
    } else {
        c = m/a;
    }
    cout << r*c;
    return 0;
}