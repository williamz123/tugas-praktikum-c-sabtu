#include <stdio.h>
int main (){

	int jm,jk,lb;

	printf("Jam Masuk  : "); scanf("%i",&jm);
	printf("Jam Pulang : "); scanf("%i",&jk);
	
	if (jm < 12 || jk < 12) {
		if (jk < jm) {
			jk=lb+12+jk;
			lb=jk-jm;	
			printf("Lama berkerja %i jam"),lb;	
		}
		else
		{
			lb=jk-jm;	
			printf("Lama berkerja %i jam"),lb;	
		}	
	}
	else
	{
		printf("Catatan: jam harus berupa angka�1-12");	
	}
}
