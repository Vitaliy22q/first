#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double x, y, c;
	printf("Vvedite x:");
	scanf("%lf", &x);
	if ((x < 8) && (x > -5)){
		printf("x E (-5,8)\n");
	} else {
		printf("x ne E (-5,8)\n");
	}
	printf("Vvedite y:");
	scanf ("%lf", &y);
	if ((y < 8) && (y > -5)){
		printf("y E (-5,8)\n");
	}else {
		printf("y ne E (-5,8)\n");
	}
	printf("Vvedite c:");
	scanf("%lf", &c);
	if ((c < 8) && (c > -5)){
		printf("c E (-5,8)\n");
	}else {
		printf("c ne E (-5,8)\n");
	}
		
	system("pause");
	return 0;
}
