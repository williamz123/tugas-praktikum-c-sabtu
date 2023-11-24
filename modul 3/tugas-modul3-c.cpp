 #include <stdio.h>
#include <math.h>

int main (){
	int sa,st,sm;
	
	printf("Sisi alas (cm)   : " );
	scanf("%i", &sa);
	printf("Sisi tinggi (cm) : " );
	scanf("%i", &st);
	
	sm=sqrt((sa*sa)+(st*st));

	printf("Sisi miring      : %d cm.",sm);
}
