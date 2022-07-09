#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	string inp;
	cin >> inp;
	unordered_set<char> chars;
	for (int i=0; i<inp.size();i++){
		chars.insert(inp[i]);
	}
	if (chars.size()%2==0){
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}
	return 0;
}