#include <stdio.h>
#include <math.h>

int main (){
	int psa=4;
	int st=5;
	int sm=sqrt((psa*psa)+(st*st));
	printf("Panjang sisi alas : %d cm.\n",psa);
	printf("Sisi tinggi       : %d cm.\n",st);
	printf("Sisi miring       : %d cm.",sm);
}
