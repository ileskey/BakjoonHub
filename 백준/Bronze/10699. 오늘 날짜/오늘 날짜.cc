#include<ctime>
#include<iostream>
using namespace std;
int main() {
	time_t t = time(0);
	t += 32400;
	struct tm dt = *gmtime(&t);
	printf("%d-%02d-%02d", dt.tm_year + 1900, dt.tm_mon + 1, dt.tm_mday);
}