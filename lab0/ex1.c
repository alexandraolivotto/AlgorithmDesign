#include <stdio.h>

int power(int x, int n) {
	int pow = 1;

	for(int i = 0; i < n; i++) {
		pow = pow * x;
	}

	return pow;
}

int main() {
	int x, n;
	
	printf("number = ");
	scanf("%d", &x);
	printf("exponent = ");
	scanf("%d", &n);


	printf("power = %d\n", power(x, n));

    return 0;
}

//complexity = O(n)