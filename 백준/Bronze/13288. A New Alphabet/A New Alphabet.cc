#include<iostream>
#include<string>
using namespace std;
int main() {
	string arr[] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};
	string s;
	char c;
	getline(cin, s);
	int s_size = s.size();
	for (int i = 0;i < s_size;i++) {
		c = s[i];
		if (c >= 'a' && c <= 'z') cout << arr[c - 'a'];
		else if (c >= 'A' && c <= 'Z') cout << arr[c - 'A'];
		else cout << c;
	}
}