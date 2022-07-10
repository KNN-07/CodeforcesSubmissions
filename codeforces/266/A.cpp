#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int inp1=0, ans=0;
	cin >> inp1;
	string a;
	cin >> a;
	char last;
	for (int i=0;i<a.length(); i++){
		if (a[i]==last){
			ans++;
		}
		last = a[i];
	}
	cout << ans;
	
}