#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x,n=365,v=366;
	printf("Vvedite god:");
	scanf("%d", &x);
	if (x%400==0) {
		printf("V etom gody %d dney\n",n);
	} else {
		if (x%100==0) {
			printf("V etom gody %d dney\n",n);
		} else {
			if (x%4==0) {
				printf("V etom gody %d dney\n",v);
			} else {
				printf("V etom gody %d dney\n",n);
			}
		}
	}
	return 0;
}

