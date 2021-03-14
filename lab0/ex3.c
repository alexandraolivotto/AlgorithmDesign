#include <stdio.h>

int power(int x, int n) {
	if(n == 0) {
		return 1;
	} else if(n % 2 == 0) {
		return power(x, n / 2) * power(x, n / 2);
	} else 
		return x * power(x, (n - 1) / 2) * power(x, (n - 1) / 2);
}

int main() {
	int x, n;
	printf("number = ");
	scanf("%d", &x);
	printf("exponent = ");
	scanf("%d", &n);

	printf("power rec = %d\n", power(x, n));

    return 0;
}