#include<iostream>
using namespace std;
int main() {
	int N, a, b, c;
	int a2[]{ 6,2,4,8 }, a3[]{ 1,3,9,7 }, a4[]{ 6,4 }, a5[]{ 5 }, a6[]{ 6 }, a7[]{ 1,7,9,3 }, a8[]{ 6,8,4,2 }, a9[]{ 1,9 };
	cin >> N;
	while (N--) {
		cin >> a >> b;
		a %= 10;
		if (a == 1) c = 1;
		else if (a == 2) c = a2[b % 4];
		else if (a == 3) c = a3[b % 4];
		else if (a == 4) c = a4[b % 2];
		else if (a == 5) c = 5;
		else if (a == 6) c = 6;
		else if (a == 7) c = a7[b % 4];
		else if (a == 8) c = a8[b % 4];
		else if (a == 9) c = a9[b % 2];
		else c = 10;
		cout << c << "\n";
	}
}	