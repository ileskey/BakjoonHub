#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	stack<int> s;
	string str;
	int len, good = 1;
	getline(cin, str);
	while (str != ".") {
		len = str.length();
		for (int i = 0; i < len; i++) {
			if (str[i] == '(') s.push(1);
			else if (str[i] == '[')s.push(2);
			else if (str[i] == ')') {
				if(s.empty()||s.top()!=1){ good = 0; break; }
				else s.pop();
			}
			else if (str[i] == ']') {
				if (s.empty() || s.top() != 2) { good = 0; break; }
				else s.pop();
			}
		}
		if (good&&s.empty())cout << "yes\n";
		else cout << "no\n";
		getline(cin, str);
		good = 1;
		while (!s.empty())s.pop();
	}
}