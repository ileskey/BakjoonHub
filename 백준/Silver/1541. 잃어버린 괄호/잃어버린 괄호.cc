#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int len = s.size(), sum = 0, tmp = 0, is_plus = 1;
	for (int i = 0; i < len; i++) {
		if (s[i] > 47) {
			tmp *= 10;
			tmp += (s[i] - '0');
			continue;
		}
		sum += (is_plus * tmp);
		tmp = 0;
		if (s[i] == '-') is_plus = -1;
	}
	sum += (is_plus * tmp);
	cout << sum;
}