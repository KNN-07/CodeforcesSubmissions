#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int k,n,w,mon=0;
	cin >> k >> n >> w;
	int val;
	for (int i=1;i<=w;i++){
		val=k*i;
		mon+=val;
	}
	if (mon>n){
		cout << abs(n - mon);
	} else {
		cout << "0";
	} 
	return 0;
}
