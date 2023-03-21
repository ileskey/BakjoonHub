#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef struct gorilla {
public:
	string name;
	priority_queue<int> q;
	gorilla(string s) {
		this->name = s;
	}
};
vector<gorilla *> v;
int main() {
	int Q, a, b, c, d, y, z;
	long long sum = 0;
	gorilla* p=NULL;
	string s;
	cin >> Q;
	while (Q--) {
		cin >> a >> s >> b;
		y = v.size();
		for (z = 0; z < y; z++)
			if (s == v[z]->name) {
				p = v[z]; break;
			}
		if (z == y) {
			p = new gorilla(s);
			v.push_back(p);
		}
		if (a == 1) {
			while (b--) {
				cin >> c;
				p->q.push(c);
			}
		}
		else {
			y = p->q.size();
			if (y < b) d = y;
			else d = b;
			while (d--) {
				sum += p->q.top();
				p->q.pop();
			}
		}
	}
	cout << sum;
}