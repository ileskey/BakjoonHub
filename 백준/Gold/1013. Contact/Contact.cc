#include<iostream>
#include<regex>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int N;
	cin >> N;
	while (N--) {
		cin >> s;
		regex r("(100+1+|01)+");
		cout << (regex_match(s, r) ? "YES\n" : "NO\n");
	}
}