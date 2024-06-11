#include<iostream>
#include<string.h>
using namespace std;
char arr[3072][6144];
void foo(int n, int height, int width) {
	if (n > 1) {
		foo(n / 2, height - (n / 2) * 3, width + (n / 2) * 3);
		foo(n / 2, height, width);
		foo(n / 2, height, width + n * 3);
	}
	else {
		arr[height - 2][width + 2] = '*';
		arr[height - 1][width + 1] = '*';
		arr[height - 1][width + 3] = '*';
		for (int a = 0; a < 5; a++)
			arr[height][width + a] = '*';
	}
	return;
}
int main() {
	int N, n;
	cin >> N;
	n = N / 3;
	for (int i = 0; i < N; i++)
		memset(arr[i], ' ', 6144);
	foo(n, N-1, 0);
	for (int i = 0; i < N; i++) {
		arr[i][N * 2 - 1] = '\0';
		cout << arr[i] << "\n";
	}
}