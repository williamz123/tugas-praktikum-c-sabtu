#include <stdio.h>
#include <math.h>

int main (){
	int pa,t,sm,l,k;
	
	printf("Panjang alas (cm)   : " );
	scanf("%i", &pa);
	printf("Tinggi (cm)         : " );
	scanf("%i", &t);
	
	l=0.5*pa*t;
	sm=sqrt((pa*pa)+(t*t));
	k=pa+t+sm;

	printf("Luas Segitiga       : %d cm^2.",l);
	printf("\nKeliling Segitiga   : %d cm.",k);
}
