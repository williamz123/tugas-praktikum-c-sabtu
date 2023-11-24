#include <stdio.h>

int main () {
	char j;
	int dp,k,h,hsd;
	float d;
	
	printf("Kode  : ");  scanf(" %i",&k);
	printf("Jenis : ");  scanf(" %c",&j);
	printf("Harga : ");  scanf(" %i",&h);
	
	switch(j) {
        case 'A':
            d = 0.1;
            break;
        case 'B':
            d = 0.15;
            break;
        case 'C':
            d = 0.2;
            break;
        default:
            d = 0;
    }	
    
	hsd= h-(h*d);
	dp=(d * 100);
	
	printf("Jenis Barang %c ",j);
	printf("mendapatkan diskon = %d%%",dp);
	printf(", harga setelah diskon = %i",hsd);
	
}
