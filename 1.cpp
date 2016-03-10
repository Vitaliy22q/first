#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double x, y, c;
	printf("Vvedite x:");
	scanf("%lf", &x);
	printf("Vvedite y:");
	scanf("%lf", &y);
	printf("Vvedite c:");
	scanf("%lf", &c);
	
	printf("Naibolshee chislo:");
	
	if ((x > y) && (x > c)) {
		printf("%.0lf\n", x);
	} else {
		if ((y > x) && (y > c)){
			printf("%.0lf\n", y);
		} else {
			if ((c > x) && (c > y)){
				printf("%.0lf\n", c);
			}
		}
	}
	

	return 0;
}
