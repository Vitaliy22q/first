#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x;
	printf("Vvedite nomer mesyaza:\n");
	scanf("%f", &x);
	if ((x <= 2) && (x >= 1)) {
		printf("winter");
	} else {
		if (x == 12) {
			printf("winter");
		} else {
			if ((x >= 3) && (x <= 5)) {
				printf("Spring");
			} else {
				if ((x >= 6) && (x <= 8)) {
					printf("Summer");
				} else {
					if ((x >= 9) && (x <= 11)) {
						printf("Otumn");
					}
				}
			}
		}
	}
	return 0;
}
