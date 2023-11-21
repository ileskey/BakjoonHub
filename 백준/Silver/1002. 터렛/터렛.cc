#include<iostream>
#include<math.h>
int main() {
	int n, x1, x2, y1, y2, r1, r2;
	double dis;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		dis = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		dis = sqrt(dis);
		if (r1 < r2) {
			int tmp = r1;
			r1 = r2;
			r2 = tmp;
		}
		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("-1\n");
		else if (r2 > dis || r1 > dis) {
			if (r2 + dis > r1)
				printf("2\n");
			else if (r2 + dis == r1)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (dis < r1 + r2)
			printf("2\n");
		else if (dis == r1 + r2)
			printf("1\n");
		else
			printf("0\n");
	}
}