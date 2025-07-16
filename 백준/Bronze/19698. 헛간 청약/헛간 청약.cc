#include<iostream>
using namespace std;
int main() {
	int N, W, H, L;
	cin >> N >> W >> H >> L;
	W /= L;
	H /= L;
	W *= H;
	cout << (N < W ? N : W);
}