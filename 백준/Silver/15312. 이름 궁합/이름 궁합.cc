#include<iostream>
using namespace std;
void mcp(int*arr, int*brr, int k) {
	for (int a = 0; a < k; a++)arr[a] = brr[a];
}
int main() {
	int i, j, k, l, * arr, *brr, crr[] = {3,2,1,2,3,3,2,3,3,2,2,1,2,2,1,2,2,2,1,2,1,1,1,2,2,1};
	string s1, s2,s3;
	cin >> s1 >> s2;
	s3 = "";
	for (i = 0, j = s1.size(); i < j; i++) {
		s3 += s1[i];
		s3 += s2[i];
	}
	k = j * 2;
	arr = new int[k] {};
	brr = new int[k] {};
	for (i = 0; i < k; i++) {
		arr[i] = crr[s3[i] - 'A'];
	}
	for (i = 1; i < k-1; i++) {
		for (j = 0; j < k-i; j++) {
			brr[j] = (arr[j] + arr[j + 1]) % 10;
		}
		mcp(arr, brr, k-i);
	}
	cout << arr[0] << arr[1];
}