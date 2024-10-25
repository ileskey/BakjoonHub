#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack<int> s;
	int N, n;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n)s.push(n);
		else s.pop();
	}
	N = s.size();
	n = 0;
	for (int i = 0; i < N; i++) {
		n += s.top();
		s.pop();
	}
	cout << n;
}