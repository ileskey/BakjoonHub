#include<iostream>
using namespace std;
int main() {
	int ar[6], br[7], a, b, c, d;
	string s;
	cin >> a;
	for (b = 0; b < a; b++) {
		for (c = 0; c < 6; c++)cin >> ar[c];
		for (c = 0; c < 7; c++)cin >> br[c];
		d = ar[0] + 2 * ar[1] + 3 * ar[2] + 3 * ar[3] + 4 * ar[4] + 10 * ar[5] - br[0] - 2 * br[1] - 2 * br[2] - 2 * br[3] - 3 * br[4] - 5 * br[5] - 10 * br[6];
		if (d > 0) s = "Good triumphs over Evil\n";
		else if (d < 0) s = "Evil eradicates all trace of Good\n";
		else s = "No victor on this battle field\n";
		cout << "Battle " << b + 1 << ": " << s;
	}
}