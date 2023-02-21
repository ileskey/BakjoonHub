#include <iostream>
#include <stack>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<char> x,y;
    int a,b,c,d;
    char z;
    string s;
    cin >> a;
    for (b = 0; b < a; b++) {
        cin >> s;
        c = s.size();
        for (d = 0; d < c; d++) {
            z = s.at(d);
            if ((z > 64 && z < 91)||(z > 96 && z < 123)||(z>47&&z<58)) {
                x.push(z);
            }
            else if (z == '-') {
                if(!x.empty()) x.pop();
            }
            else if (z == '<') {
                if (!x.empty()) {
                    y.push(x.top());
                    x.pop();
                }
            }
            else {
                if (!y.empty()) {
                    x.push(y.top());
                    y.pop();
                }
            }
        }
        while (!x.empty()) { y.push(x.top()); x.pop(); }
        while (!y.empty()) { cout << y.top(); y.pop(); }
        cout << "\n";
    }
}