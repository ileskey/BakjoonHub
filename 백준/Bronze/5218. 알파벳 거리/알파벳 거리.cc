#include<iostream>
#include<string>
using namespace std;
int main() {
	int M, N, L;
	string s1, s2;
	cin >> N;
	while (N--) {
		cin >> s1 >> s2;
		L = s1.length();
		cout << "Distances: ";
		for (int i = 0; i < L;i++) {
			M = s2[i] - s1[i];
			if (M < 0) M += 26;
			cout << M << " ";
		}
		cout << "\n";
	}
}