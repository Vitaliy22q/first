#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	printf("jaka goduna?:");
	scanf("%d", &t);
	if ((t >= 6) && (t <= 11)){
		printf("good afternoon sir!\n");
	} else {
		if ((t >= 12) && (t <= 17)) {
			printf("good day sir!\n");
		} else {
			if ((t >= 18) && (t <= 24)){
				printf("good evening sir!\n");
			} else {
				if ((t >= 0) && (t <= 6)) {
					printf("good dream!\n");
				}
			}
		}
	}
	system("pause");
	return 0;
}
