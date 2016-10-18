#include <stdio.h>
#include <stdlib.h>
#include "project.h"
/*void input(double p, double q) {
	scanf("%lf", &p);
	scanf("%lf", &q);
}*/
void printmenu() {
	printf("----------------------\n\t");
	printf("1. Absolute\n\t"
	"2. Square root\n\t"
	"3. Exit\n");
	printf("----------------------\n");
}
int main() {
	int choice;
	double a, b, d, x, y;
	/*printf("Enter your choice :");*/
	while(1) {
		printmenu();
		scanf("%d", &choice);
		switch(choice) {
			/*case 1:
				scanf("%lf%lf", &x, &y);
				d = mpow(x,y);
				printf("Power of %lf is %lf\n", a, d);
				printf("===============================\n");
				break;*/
			case 1:
				scanf("%lf", &a);
				d = mabs(a);
				printf("Absolute value of %lf is %lf\n", a, d);
				printf("===============================\n");
				break;
			case 2:
				scanf("%lf", &a);
				d = msqrt(a);
				printf("Squareroot of %lf is %lf\n", a, d);
				printf("===============================\n");
				break;
			/*case 4:
				scanf("%lf%lf", &a, &b);
				d = mfmod(a, b);
				printf("Remainder is = %lf\n", d);
				printf("===============================\n");
				break;*/
			case 3:
				exit(1);
				break;
			default:
				printf("Wrong ");
				break;
		}
	}
	return 0;
}
