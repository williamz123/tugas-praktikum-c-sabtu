#include <stdio.h>

int main (){
	int b;
	printf("Bilangan : " );
	scanf("%i", &b);
	if (b%2==0) {
		printf("%i adalah bilangan genap",b);
	}
	else
	{
		printf("%i adalah bilangan ganjil",b);
	}
}
