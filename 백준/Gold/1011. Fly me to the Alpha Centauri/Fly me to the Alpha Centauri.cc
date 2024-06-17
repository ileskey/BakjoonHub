#include<iostream>
using namespace std;
int main() {
	int N, x, y, i;
	long long time;
	cin >> N;
	while (N--) {
		cin >> x >> y;
		y -= x;
		time = 0;
		for (i = 1; i * 2 <= y; i++) {
			y -= i * 2;
			time += 2;
		}
		if (y > 0) {
			if (y > i) time++;
			time++;
		}
		cout << time << "\n";
	}
}