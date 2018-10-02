#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("input two intergers : ");
	scanf("%d %d", &a, &b);
	
	printf("+ result is %d", a+b);
	printf("\n- result is %d", a-b);
	printf("\n* result is %d", a*b);
	printf("\n/ result is %d", a/b);
	printf("\n%% result is %d", a%b);
	
	return 0;
}
