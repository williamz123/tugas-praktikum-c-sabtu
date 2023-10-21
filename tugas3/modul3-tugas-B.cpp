#include <stdio.h>
#include <math.h>

int main()
{
	int sa,st,sm;
	
	printf("sisi alas (cm)  : ");
	scanf("%i", &sa);
	printf("sisi tinggi (cm)  : ");
	scanf("%i", &st);
	
	sm=sqrt((sa*sa)+(st*st));
	
	printf("sisi miring          : %d cm.",sm);
	return 0;
}
