#include<iostream>
#include<string.h>
int main() {
	int N, a, b;
	char arr[10];
	scanf("%d", &N);
	if (N <= 9) {
		printf("%d", N);
	}
	else if (N <= 189) {
		N -= 10;
		a = N / 2;
		b = N % 2;
		sprintf(arr, "%d", 10 + a);
		printf("%c", arr[b]);
	}
	else if (N <= 2889) {
		N -= 190;
		a = N / 3;
		b = N % 3;
		sprintf(arr, "%d", 100 + a);
		printf("%c", arr[b]);
	}
	else if (N <= 38889) {
		N -= 2890;
		a = N / 4;
		b = N % 4;
		sprintf(arr, "%d", 1000 + a);
		printf("%c", arr[b]);
	}
	else if (N <= 488889) {
		N -= 38890;
		a = N / 5;
		b = N % 5;
		sprintf(arr, "%d", 10000 + a);
		printf("%c", arr[b]);
	}
	else if (N <= 5888889) {
		N -= 488890;
		a = N / 6;
		b = N % 6;
		sprintf(arr, "%d", 100000 + a);
		printf("%c", arr[b]);
	}
	else if (N <= 68888889) {
		N -= 5888890;
		a = N / 7;
		b = N % 7;
		sprintf(arr, "%d", 1000000 + a);
		printf("%c", arr[b]);
	}
	else if (N <= 788888889) {
		N -= 68888890;
		a = N / 8;
		b = N % 8;
		sprintf(arr, "%d", 10000000 + a);
		printf("%c", arr[b]);
	}
	else {
		N -= 788888890;
		a = N / 9;
		b = N % 9;
		sprintf(arr, "%d", 100000000 + a);
		printf("%c", arr[b]);
	}
}