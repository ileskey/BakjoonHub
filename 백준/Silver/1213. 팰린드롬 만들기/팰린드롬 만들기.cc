#include<iostream>
#include<stack>
using namespace std;
int main() {
	int a, b, c, d;
	char ar[26]{}, e;
	stack<char> ba;
	string s, s1;
	cin >> s;
	a = s.size();
	for (b = 0; b < a; b++)
		ar[s[b] - 'A']++;
	c = -1;
	for (b = 0; b < 26; b++) {
		if (ar[b] % 2 == 1) {
			if (c == -1) c = b;
			else {
				cout << "I'm Sorry Hansoo";
				return 0;
			}
		}
		ar[b] /= 2;
	}
	for (b = 0; b < 26; b++) {
		e = (b + 'A');
		for (d = 0; d < ar[b]; d++) {
			s1 += e;
			ba.push(e);
		}
	}
	if(c!=-1)s1 += (c + 'A');
	a = ba.size();
	for (b = 0; b < a; b++) {
		s1 += ba.top();
		ba.pop();
	}
	cout << s1;
}