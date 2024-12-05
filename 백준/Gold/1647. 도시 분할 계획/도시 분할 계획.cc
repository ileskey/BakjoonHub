#include<iostream>
using namespace std;
typedef struct input {
public:
	int v1;
	int v2;
	int weight;
}input;
bool mycomp(input i1, input i2) {
	return i1.weight < i2.weight;
}
input heap[1000001];
int root[1000001] = {};
int N, M, hsize = 1;
void mpush(input x) {
	int t = hsize++;
	input tmp;
	heap[t] = x;
	while (t > 1) {
		if (heap[t].weight < heap[t / 2].weight) {
			tmp = heap[t];
			heap[t] = heap[t / 2];
			heap[t / 2] = tmp;
			t /= 2;
		}
		else break;
	}
}
void mpop() {
	int t = 1, t2 = 2;
	input tmp;
	heap[t] = heap[hsize--];
	while (t2 <= hsize) {
		if (t2 + 1 != hsize && heap[t2].weight > heap[t2 + 1].weight) t2++;
		if (heap[t].weight > heap[t2].weight) {
			tmp = heap[t];
			heap[t] = heap[t2];
			heap[t2] = tmp;
			t = t2;
			t2 = t * 2;
		}
		else break;
	}
}
int kruskal() {
	input tmp;
	int root_v1, root_v2, t, sum = 0, max = 0;
	for (int i = 0; i < N; i++) root[i] = i;
	while (hsize) {
		tmp = heap[1];
		mpop();
		root_v1 = tmp.v1;
		root_v2 = tmp.v2;
		while (root_v1 != root[root_v1]) {
			t = root_v1;
			root_v1 = root[root_v1];
			root[t] = root[root_v1];
		}
		while (root_v2 != root[root_v2]) {
			t = root_v2;
			root_v2 = root[root_v2];
			root[t] = root[root_v2];
		}
		if (root_v1 == root_v2) continue;
		root[root_v2] = root_v1;
		if (max < tmp.weight)max = tmp.weight;
		sum += tmp.weight;
	}
	return sum - max;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long sum = 0;
	input inp;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> inp.v1 >> inp.v2 >> inp.weight;
		mpush(inp);
	}
	cout << kruskal();
}