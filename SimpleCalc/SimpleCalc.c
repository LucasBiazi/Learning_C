#include <stdio.h>

void main(){
	int c = 1;
	float n1, n2;
	float calculus (float n1, float n2, int c){
		if(c == 0) {
			printf("Bye!\n");
			return 0;
		}
		printf("Type the first number: \n");
		scanf("%f", &n1);
		printf("Type the second number: \n");
		scanf("%f", &n2);
		switch(c){
			case 1:
				printf("%f + %f = %f", n1, n2, (n1 + n2));
				break;
			case 2:
				printf("%f - %f = %f", n1, n2, (n1 - n2));
				break;
			case 3:
				printf("%f * %f = %f", n1, n2, (n1 * n2));
				break;
			case 4:
				printf("%f / %f = %f", n1, n2, (n1 / n2));
			break;
			default:
				printf("Invalid number.");
				break;
		}
	}
	while (c != 0){
		printf("\nSelect the operation:\n(0) Quit\n(1) Addition\n(2) Subtraction\n(3) Multiplication\n(4) Division\n");
		scanf("%d", &c);
		calculus(n1, n2, c);
	}
}
