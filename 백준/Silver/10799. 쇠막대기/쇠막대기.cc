#include<iostream>
#include<stack>
#include<string.h>
int main() {
	char arr[100001];
	scanf("%s", arr);
	int idx = 0, sum = 0;
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] == '(') idx++;
		else {
			if (arr[i - 1] == '(') {
				idx--;
				sum += idx;
			}
			else {
				idx--;
				sum++;
			}
		}
	}
	printf("%d\n", sum);
}