#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float s,y;
	printf("Vvedite s:\n");
	scanf("%f", &s);
	if((s<=5) && (s>=-3)){
		y=s*s;
        printf("\nf(s)= %.2f", y);
	} else {
		y = 6 * s;
		printf("\nf(s)= %.2f", y);
	}
	
	return 0;
}


