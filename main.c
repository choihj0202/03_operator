#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	printf("input three numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("The mean of %d, %d, %d is : %f", a, b, c, (double)(a+b+c)/3);
	
	return 0;
}
