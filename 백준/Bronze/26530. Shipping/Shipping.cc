#include<iostream>
using namespace std;
int main() {
	cout.setf(ios_base::showpoint);
	cout.setf(ios_base::floatfield, ios_base::fixed);
	cout.precision(2);
	int N, K, t, X, Y;
	float f, sum;
	char c;
	string s;
	cin >> N;
	while (N--) {
		sum = 0;
		cin >> K;
		while (K--) {
			cin >> s >> t >> f;
			sum += f * t;
		}
		cout << "$"<< sum << "\n";
	}
}