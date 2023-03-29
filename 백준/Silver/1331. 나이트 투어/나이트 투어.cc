#include<iostream>
#include<queue>
using namespace std;
queue<string> q;
int dx[8] = { 2, 2, -2, -2, 1, 1, -1 ,-1 };
int dy[8] = { 1, -1, 1, -1, 2, -2, 2, -2 };
int main() {
	int a, b, flag;
	string s;
	short arr[6][6]{};
	char x, y, x1, y1, x2, y2;
	cin >> s;
	x1 = s[0], y1=s[1];
	x = x1, y = y1;
	arr[x1 - 'A'][y1 - '1'] = 1;
	for (a = 1; a < 36; a++) {
		cin >> s;
		q.push(s);
	}
	for (a = 1; a < 36; a++) {
		flag = 0;
		s = q.front();
		q.pop();
		x2 = s[0], y2 = s[1];
		for (b = 0; b < 8; b++)
			if (x1 - x2 == dx[b] && y1 - y2 == dy[b]) flag = 1;
		if (flag) arr[x2 - 'A'][y2 - '1'] = 1;
		else {
			cout << "Invalid\n";
			return 0;
		}
		x1 = x2, y1 = y2;
	}
	for (a = 0; a < 6; a++)for (b = 0; b < 6; b++)if (arr[a][b]==0) {
		cout << "Invalid\n";
		return 0;
	}
	flag = 0;
	for (a = 0; a < 8; a++) {
		if (x2 - x == dx[a] && y2 - y == dy[a])flag = 1;
	}
	if (flag)cout << "Valid\n";
	else cout << "Invalid\n";
}