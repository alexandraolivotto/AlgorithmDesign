#include <stdio.h>

int fib(int nr) {
	if(nr == 0) {
		return 0;
	} else 
		if(nr == 1) {
			return 1;
		} else
			return fib(nr - 1) + fib(nr - 2);
}

int main() {
	int nr;
	printf("number = ");
	scanf("%d", &nr);

	printf("fib = %d\n", fib(nr));

    return 0;
}