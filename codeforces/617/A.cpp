#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int x, ans=0;
	cin >> x;
	if (x%5!=0){
		x -= (x%5);
		cout << x/5 + 1;
	} else {
		cout << x/5;
	}
	return 0;
}

