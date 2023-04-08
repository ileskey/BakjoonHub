#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	string s;
	char arr[] = { "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./" };
	char s2[1024];
	while (getline(cin, s)) {
		memset(s2, 0, 1024);
		int l = s.size();
		for (int i = 0; i < l; i++) {
			if (s[i] == ' ') { strcat(s2, " "); continue; }
			strncat(s2, strchr(arr, s[i]) - 1, 1);
		}
		cout << s2 << "\n";
		char c;
	}
}