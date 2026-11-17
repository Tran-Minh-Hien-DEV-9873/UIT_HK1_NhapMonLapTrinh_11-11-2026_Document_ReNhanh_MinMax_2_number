#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Nhap a vao day: ");
	scanf("%d", &a);
	
	printf("Nhap b vao day: ");
	scanf("%d", &b);
	
	int max;
	
	if(a > b)
	{
		max = a;
		printf("%d > %d nen %d la max",a,b,max);
	}
	else
	{
		max = b;
		printf("%d < %d nen %d la max",a,b,max);
	}
	return 0;
}
