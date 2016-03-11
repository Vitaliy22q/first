#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float s,y;
	printf("Vvedite s:\n");
	scanf("%f", &s);
	if(s<=0){
	y=0;
    printf("\nf(s)= %.2f", y);
	}
	else 
	{
	if((0<s) && (s<=1))
	y=s;
	printf("\nf(s)= %.2f", y);
	    
		}
		
	
	if(s>1)
	y=s*s*s;
	printf("\nf(s)= %.2f", y);

	
	
	return 0;
}
