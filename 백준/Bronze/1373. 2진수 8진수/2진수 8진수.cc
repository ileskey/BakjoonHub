#include<iostream>
#include<cstring>
using namespace std;
char arr[1000001];
char s[333334];
int a, b;
void fnc(int c) {
	int d = c ? 1 : 0;
	for(a = 0;a < b; a++)
		s[a+d] = ((arr[a * 3 + c] - '0') * 4 + (arr[a * 3 + c + 1] - '0') * 2 + (arr[a * 3 + c + 2]));
}
int main() {
	cin >> arr;
	int c = strlen(arr) % 3;
	b = strlen(arr);
	if (b >= 3) {
		b /= 3;
		if (c == 0) {
			fnc(0);
		}
		else if (c == 1) {
			s[0] = arr[0];
			fnc(1);
		}
		else {
			s[0] = (arr[0] - '0') * 2 + arr[1];
			fnc(2);
		}
	}
	else if (b == 2) {
		s[0] = (arr[0] - '0') * 2 + arr[1];
	}
	else
		s[0] = arr[0];
	cout << s;
}