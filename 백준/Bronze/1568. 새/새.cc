#include<iostream>
using namespace std;
int main() {
	int N, cnt=0, i=1;
	cin >> N;
	while (N > 0) {
		if (N >= i) {
			N -= i++;
			cnt++;
		}
		else i = 1;
	}
	cout << cnt;
}