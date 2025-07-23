#include<iostream>
using namespace std;
int main() {
	int a = 0, b;
	for (int i = 0;i < 5;i++) {
		cin >> b;
		a += b;
	}
	cout << a;
}