#include<iostream>
using namespace std;
int main() {
	long long A, B, C, Temp = 1;
	cin >> A >> B >> C;
	while (B > 0) {
		if (B % 2 == 1) {
			Temp *= A;
			Temp %= C;
			B--;
		}
		else {
			A *= A;
			A %= C;
			B /= 2;
		}
	}
	cout << Temp;
}