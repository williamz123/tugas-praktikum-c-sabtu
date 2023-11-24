#include <stdio.h>

int main (){
	int c;
	float f,r;
	
	printf("Celcius   : " );
	scanf("%i", &c);

	f=(c*9/5) + 32;
	r=(c*5/4);
	
	printf("Farenheit : %.1f *f",f);
	printf("\nReamur    : %.1f *R",r);
}
