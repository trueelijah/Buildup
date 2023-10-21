#include <stdio.h>

int main(void)
{
	int number = 12;
	int count = 10;
	
	do {
		int multiply = count * number;
		printf("%d * %d = %d\n", count, number, multiply);
		number = number - 1;
	}
	
	while(number > 0);
		
	return 0;
}
