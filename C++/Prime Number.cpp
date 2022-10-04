#include "stdio.h"
#include "stdlib.h"
	
int x;
void PrimeNumber(void);

int main () {
	printf("------------------");
	printf("\n| Prime Number   |");
	printf("\n------------------");
	printf("\n\n");
	printf("What number do you want to check?\n");
	scanf("%d", &x);
	PrimeNumber();
}

void PrimeNumber () {
	if (x%2 == 0) {
		printf("\n%d is not a Prime Number", x);
	} else {
		printf("\n%d is a Prime Number", x);
	}
}

//Made By UlissesJunior
