#include<iostream>
using namespace std;
int main() {
	int f = 12, sum = 0, t;
	string s;
	cin >> s;
	for (int i = 0;i < 12;i++) {
		if (s[i] == '*') {
			f = i;
			continue;
		}
		s[i] -= '0';
		if (i % 2 == 0)sum += s[i];
		else sum += (3 * s[i]);
	}
	s[12] -= '0';
	if (f == 12) {
		cout << (10 - sum % 10)%10;
		return 0;
	}
	t = (10 - (sum + s[12]) % 10)%10;
	if (f % 2 == 1) {
		while (t % 3) t += 10;
		cout << t / 3;
	}
	else cout << t;
}