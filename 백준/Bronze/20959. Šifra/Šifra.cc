#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s;
	vector<int> v;
	cin >> s;
	int len = s.length(), temp = 0;
	for (int i = 0; i <= len; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			temp *= 10;
			temp += (s[i] - '0');
		}
		else if(temp!=0){
			int flag = 1;
			for (int j : v) {
				if (j == temp) {
					flag = 0;
					break;
				}
			}
			if (flag)v.push_back(temp);
			temp = 0;
		}
	}
	cout << v.size();
}