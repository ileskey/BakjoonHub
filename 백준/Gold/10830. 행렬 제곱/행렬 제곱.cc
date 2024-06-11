#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//m1, m2 : 2^N 행렬(m3) 만드는데 사용
	//m3 : 2^N 행렬
	//m4 ; 행렬 제곱의 최종결과가 될 행렬
	//m5 : 행렬 제곱 임시 저장
	int m1[5][5] = {}, m2[5][5] = {}, m3[5][5] = {}, m4[5][5] = {1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1}, m5[5][5] = {};
	int N, t,u, flag[37] = {};
	long long int B;
	long long arr[37] = { 1, };
	//N과 B 입력받고 B를 적절히 가공.
	cin >> N >> B;
	for (int i = 1; i < 37; i++) {
		arr[i] = arr[i - 1] * 2;
	}
	for (int i = 36; i >= 0; i--)
		if (B - arr[i] >= 0) {
			B -= arr[i];
			flag[i] = 1;
		}
	//N을 이용해 행렬 입력.
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> t;
			m1[i][j] = t;
			m2[i][j] = t;
		}
	}
	for (int a = 0; a < 37; a++) {
		//다음 단계에서 사용할 2^(a+1) 만들기
		for (int b = 0; b < N; b++) {
			for (int c = 0; c < N; c++) {
				for (int d = 0; d < N; d++) {
					m3[b][c] += m1[b][d] * m2[d][c];
				}
			}
		}
		//flag
		;
		if (flag[a] == 1) {
			for (int b = 0; b < N; b++) {
				for (int c = 0; c < N; c++) {
					for (int d = 0; d < N; d++) {
						m5[b][c] += m4[b][d] * m1[d][c];
					}
				}
			}
		}
		//다음 단계에서 사용하기 위한 준비
		for (int b = 0; b < N; b++) {
			for (int c = 0; c < N; c++) {
				t = m3[b][c] % 1000;
				m1[b][c] = t;
				m2[b][c] = t;
				m3[b][c] = 0;
				if (flag[a] == 1) {
					u = m5[b][c] % 1000;
					m4[b][c] = u;
					m5[b][c] = 0;
				}
			}
		}
	}
	for (int b = 0; b < N; b++) {
		for (int c = 0; c < N; c++) {
			cout << m4[b][c] << " ";
		}
		cout << "\n";
	}
}