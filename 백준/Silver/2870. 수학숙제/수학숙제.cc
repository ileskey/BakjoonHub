#include<iostream>
#include<algorithm>
using namespace std;
string arr[5000];
int comp(string s1, string s2) {
	if (s1.length() == s2.length()) return s1 < s2;
	else return s1.length() < s2.length();
}
int main() {
	long long N, a = 0, slen, f = 0, m = 0, n = 0;
	string s;
	cin >> N;
	while (N--) {
		cin >> s;
		slen = s.size();
		for (int i = 0;i < slen;i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				if (arr[m] == "0") {
					arr[m][0] = s[i];
					continue;
				}
				arr[m] += s[i];
				f = 1;
				continue;
			}
			else {
				if (f)m++;
				f = 0;
			}
		}
		if (f)m++;
		f = 0;
	}
	sort(arr, arr+m, comp);
	for (int i = 0;i < m;i++)cout << arr[i]<<"\n";
}