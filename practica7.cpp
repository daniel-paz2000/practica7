#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b, n, e=0;
	printf("Ingrese un numero: "); scanf("%i",&b);
	printf("Ingrese la cantidad de multiplos: "); scanf("%i", &n);
	e=(b*n);
	for(int i=b; i<=e; i+=b){
		printf("%i,",i);
	}
	system("pause");
	return 0;
}
