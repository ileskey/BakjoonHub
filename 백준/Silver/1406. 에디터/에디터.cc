#include <iostream>
#include<stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<char> st1, st2;
    string s1;
    int a;
    cin >> s1;
    for (a = 0; a < s1.size(); a++) st1.push(s1.at(a));
    char c;
    cin >> a;
    while (a--) {
        cin >> c;
        switch (c) {
        case 'L':
            if (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
            break;
        case 'D':
            if (!st2.empty()) {
                st1.push(st2.top());
                st2.pop();
            }
            break;
        case 'B':
            if (!st1.empty()) {
                st1.pop();
            }
            break;
        case 'P':
            cin >> c;
            st1.push(c);
            break;
        }
    }
    while (!st1.empty()) { st2.push(st1.top()); st1.pop(); }
    while (!st2.empty()) { cout << st2.top(); st2.pop(); }
}