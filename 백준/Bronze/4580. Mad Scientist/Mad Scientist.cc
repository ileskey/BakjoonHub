#include<iostream>
using namespace std;
int main() {
	int N, prev, curr, t;
	while (1) {
		cin >> N;
		curr = 0;
		t = 1;
		if (N == 0)break;
		while (N--) {
			prev = curr;
			cin >> curr;
			for (int i = prev;i < curr;i++)cout << t <<" ";
			t++;
		}
		cout << "\n";
	}
}