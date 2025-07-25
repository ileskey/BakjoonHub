#include<iostream>
using namespace std;
int main() {
	long long X, Y, Z, sum = 0;
	cin >> X >> Y >> Z;
	sum += Z / X;
	sum -= Y / X;
	if (Y > 0) {
		if (!(Y % X))sum++;
	}
	else if (Z < 0) {
		if (!(Z % X))sum++;
	}
	else {
		sum++;
	}
	cout << sum;
}