#include <iostream>
int main(void) {
    int a, b;
    long long arr[91] = { 0, 1, };
    std::cin >> a;
    for (b = 2; b <= a; b++) arr[b] = arr[b - 1] + arr[b - 2];
    std::cout << arr[a];
}