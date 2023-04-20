#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int * arr[3], brr[3], a, b, c, bef = 0, aft = 0;
	cin >> brr[0] >> brr[1] >> brr[2];
	for(a=0;a<3;a++){
		arr[a] = new int[brr[a]];
		for (b = 0; b < brr[a]; b++)cin >> arr[a][b];
		sort(arr[a], arr[a] + brr[a], greater<>());
	}
	b = brr[0] < brr[1] ? brr[0] : brr[1];
	b = b < brr[2] ? b : brr[2];
	for (a = 0; a < b; a++) {
		c = arr[0][a] + arr[1][a] + arr[2][a];
		bef += c;
		aft += (c * 9 / 10);
	}
	for (a = 0; a < 3; a++) {
		for (c = b; c < brr[a]; c++) {
			bef += arr[a][c];
			aft += arr[a][c];
		}
	}
	cout << bef << "\n" << aft;
}