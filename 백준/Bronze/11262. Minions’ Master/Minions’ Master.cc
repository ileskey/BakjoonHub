#include<iostream>
using namespace std;
double rhu(double d) {
    int i = (int)(d * 10000);
    int j = i - i % 10;
    if (i % 10 > 4)j += 10;
    d = j / 10000.0;
    return d;
}
int main() {
    int N, M, arr[1000];
    double sum, power;
    cin >> N;
    cout << fixed;
    cout.precision(3);
    while (N--) {
        cin >> M;
        sum = 0;
        for (int i = 0; i < M; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        power = rhu(sum / M);
        sum = 0;
        for (int i = 0; i < M; i++) {
            if (arr[i] > power)sum++;
        }
        cout << power << " " << rhu(sum / M * 100) << "%\n";
    }
}