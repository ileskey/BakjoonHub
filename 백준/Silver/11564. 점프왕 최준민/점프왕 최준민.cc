#include<iostream>
using namespace std;
int main() {
	long long X, Y, Z, sum = 0;
	cin >> X >> Y >> Z;
	if (Y > 0) {
		sum += Z / X;
		sum -= Y / X;
		if (!(Y % X))sum++;
	}
	else if (Z < 0) {
		sum -= Y / X;
		sum += Z / X;
		if (!(Z % X))sum++;
	}
	else {
		sum += Z / X;
		sum -= Y / X;
		sum++;
	}
	cout << sum;
}