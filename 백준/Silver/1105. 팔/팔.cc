#include<iostream>
#include<string>
using namespace std;
int main() {
	int A, B, lA, lB, cnt = 0;
	string sA, sB;
	cin >> A >> B;
	sA = to_string(A);
	sB = to_string(B);
	lA = sA.length();
	lB = sB.length();
	if (lA < lB) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < lA; i++) {
		if (sA[i] == sB[i]) {
			if (sA[i] == '8') cnt++;
		}
		else break;
	}
	cout << cnt;
}