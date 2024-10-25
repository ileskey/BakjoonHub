#include<iostream>
#include<string>
using namespace std;
int main() {
	string s1, s2, s3;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	cin >> s1 >> s2 >> s3;
	if (s1[0] <= '9') {
		a1 = stoi(s1); a4 = a1 + 3;
	}
	if (s2[0] <= '9') {
		a2 = stoi(s2); a4 = a2 + 2;
	}
	if (s3[0] <= '9') {
		a3 = stoi(s3); a4 = a3 + 1;
	}
	if (a4 % 3 == 0 && a4 % 5 == 0)cout << "FizzBuzz";
	else if (a4 % 3 == 0)cout << "Fizz";
	else if (a4 % 5 == 0)cout << "Buzz";
	else cout << a4;
}