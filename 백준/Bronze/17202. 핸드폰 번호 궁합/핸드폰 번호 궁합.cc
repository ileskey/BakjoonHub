#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int a, b, c;
	char ar[16]{}, ar2[16]{}, ar3[16]{};
	cin >> ar>>ar2;
	for (a = 0; a < 8; a++) {
		ar3[a * 2] = ar[a];
		ar3[a * 2 + 1] = ar2[a];
	}
	strcpy(ar, ar3);
	for (a = 0; a < 16; a++) ar[a] -= '0';
	for (a = 0; a < 14; a++) {
		for (b = 0; b < 15 - a; b++)ar2[b] = (ar[b] + ar[b + 1]) % 10;
		for (b = 0; b < 15 - a; b++)ar[b] = ar2[b];
		
	}
	cout << (int)ar[0] << (int)ar[1];
}