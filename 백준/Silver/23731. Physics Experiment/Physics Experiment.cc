#include<iostream>
using namespace std;
int main() {
	int len, t;
	string s;
	cin >> s;
	len = s.length();
	t = len;
	for (int i = len - 1; i > 0; i--) {
		if (s[i] > '4') {
			s[i - 1]++;
			t = i;
		}
	}
	if (s[0] > '4') {
		cout << "10";
		for (int i = 1; i < len; i++) {
			cout << 0;
		}
	}
	else {
		for (int i = 0; i < t; i++) cout << s[i];
		for (int i = t; i < len; i++)cout << "0";
	}
}