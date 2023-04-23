#include<iostream>
int main() {
	using namespace std;
	int a, b, c, d,e;
	char arr[] = "@@@ @@ @ @@ @ @@ @ @@ @@@";
	cin >> a;
	for (b = 0; b < 5; b++) for (c = 0; c < a; c++) {
			for (d = 0; d < 5; d++) for (e = 0; e < a; e++) cout << arr[b * 5 + d];
			cout << "\n";
		}
}