#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string arr, arr2, arr3, arr4;
    int num = 0, num2 = 0,tmp, a, b, c, d = 1;
    cin >> arr >> arr2;
    if (arr2.size() < 6) {
        num = stoi(arr);
        num2 = stoi(arr2);
        if (num > num2) {
            tmp = num;
            num = num2;
            num2 = tmp;
        }
        if (num2 - num < 1) cout << 0;
        else cout << num2 - num - 1 << "\n";
        while (++num < num2) {
            cout << num << " ";
        }
    }
    else {
        b = arr.size();
        c = arr2.size();
        for (a = 0; a < 7; a++) {
            if (b - a >= 0) num += ((arr[b - a - 1] - 48) * d);
            if (c - a >= 0) num2 += ((arr2[c - a - 1] - 48) * d);
            d *= 10;
        }
        arr3 = arr2.substr(0, c - 7);
        if (num > num2) {
            tmp = num;
            num = num2;
            num2 = tmp;
            arr3 = arr.substr(0, b - 7);
        }
        if (num2 - num < 1) cout << 0;
        else cout << num2 - num - 1 << "\n";
        while (++num < num2) {
            cout << arr3;
            cout.width(7);
            cout.fill('0');
            cout << num << " ";
        }
    }
}