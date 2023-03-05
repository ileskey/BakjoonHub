#include<iostream>
#include<string>
using namespace std;
int main() {
    int N;
    string s;
    cin >> N;
    cin.get();
    for (int a = 1; a <= N; a++) {
        getline(cin, s);
        cout << a << ". " << s << "\n";
    }
}