#include<iostream>
using namespace std;
int heap_size = 0;
int heap[100001];
int comp(int x, int y) {
	int abs_x = x < 0 ? x * -1 : x;
	int abs_y = y < 0 ? y * -1 : y;
	if (abs_x == abs_y) {
		return x > y;
	}
	return abs_x > abs_y;
}
void swap(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
}
void pop() {
	if (heap_size == 0) {
		cout << "0\n";
		return;
	}
	int t, i = 1, i2 = 2;
	cout << heap[1] << "\n";
	heap[1] = heap[heap_size];
	heap[heap_size--] = 0;
	while (i2 <= heap_size) {
		i2 = i * 2;
		if (i2 + 1 <= heap_size) {
			if (comp(heap[i2], heap[i2+1])) i2++;
		}
		if (i2 <= heap_size && comp(heap[i], heap[i2])) {
			swap(heap[i], heap[i2]);
			i = i2;
		}
		else return;
	}
}
int main() {
	int N, c, abs_c, t, t2;
	cin >> N;
	while (N--) {
		cin >> c;
		if (c == 0) {
			pop();
			continue;
		}
		abs_c = c < 0 ? c * -1 : c;
		heap_size++;
		heap[heap_size] = c;
		t2 = heap_size;
		while (t2 > 1) {
			t = t2 / 2;
			if (comp(heap[t], heap[t2])) {
				swap(heap[t], heap[t2]);
				t2 = t;
			}
			else break;
		}
	}
}