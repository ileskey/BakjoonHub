#include<iostream>
#include<algorithm>
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
input arr[100000];
int did[100000] = {};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long sum = 0;
	int V, E;
	cin >> V >> E;
	for (int i = 0; i < E; i++) {
		cin >> arr[i].v1 >> arr[i].v2 >> arr[i].weight;
	}
	sort(arr, arr + E, mycomp);
	did[arr[0].v1] = 1;
	did[arr[0].v2] = 1;
	sum += arr[0].weight;
	for (int a = 0; a < V; a++) {
		for (input i : arr) {
			if (did[i.v1] && did[i.v2]) continue;
			if (!did[i.v1] && !did[i.v2]) continue;
			did[i.v1] = 1;
			did[i.v2] = 1;
			sum += i.weight;
			break;
		}
	}
	cout << sum;
}