#include<iostream>
int main() {
	int N, a, b, s = 0;
	int arr[360] = { 0, };
	scanf("%d", &N);
	while (N--) {
		scanf("%d %d", &a, &b);
		for (int c = 0; c <= b; c++) {
			arr[(360 + a + c) % 360] = 1;
			arr[(360 + a - c) % 360] = 1;
		}
	}
	for (int c = 0; c < 360; c++) s += arr[c];
	printf("%d", s);
}