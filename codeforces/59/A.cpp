#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string inp;
    cin >> inp;
    int up=0,low=0;
    for (auto i : inp){
        if (isupper(i)==true){
            up++;
        } else {
            low++;
        }
    }
    if (up>low){
        for (auto i : inp){
            if (isupper(i)==false){
                i -=32;
            }
            cout << i;
        }
    } else if (up<=low)
    {
        for (auto i : inp){
            if (isupper(i)==true){
                i +=32;
            }
            cout << i;
        }
    }
}
