#include<iostream>
#include<queue>
using namespace std;
int main() {
	int M, N, a, b, c, d, m;
	queue <int> q;
	cin >> M >> N;
	char* did = new char[N + 1] {};
	q.push(M);
	c = 0;
	d = q.size();
	while (1) {
		while (d--) {
			m = q.front();
			q.pop();
			if (m == N) {
				cout << c;
				return 0;
			}
			if (m + 1 <= N && !did[m + 1]) {
				did[m + 1]++;
				q.push(m + 1);
			}
			if (2 * m <= N && !did[2 * m]) {
				did[2 * m]++;
				q.push(2 * m);
			}
		}
		c++;
		d = q.size();
	}
}