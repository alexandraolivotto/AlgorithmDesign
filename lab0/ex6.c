#include <stdio.h>
#include <stdlib.h>

int fib(int nr) {
	int *fibo = malloc(nr * sizeof(int));
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < nr; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	return fibo[nr - 1];
}

int main() {
	int nr;
	printf("number = ");
	scanf("%d", &nr);

	printf("fib = %d\n", fib(nr));

    return 0;
}