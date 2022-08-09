#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string inp;
    cin >> inp;
    for (auto x : inp){
        if (x != 'a' && x != 'A' 
        && x != 'o' && x != 'O' 
        && x != 'y' && x != 'Y'
        && x != 'e' && x != 'E'
        && x != 'u' && x != 'U'
        && x != 'i' && x != 'I'){
            if (isupper(x)==true){
                cout << "." << char(tolower(x));
            }
            else {
                cout << "." << x;
            }
        }
    }
}