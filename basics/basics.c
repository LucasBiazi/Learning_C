// Calls functions such as printf and scanf and others.
#include <stdio.h>
#include <stdbool.h>
//Main function, where your code goes.
int main(){
	//Some Data types
	int round_number = 10;
	float broken_number = 7.1234567;
	double bigger_broken_number = 7.123456789101112;
	char single_character = 'L';
	char strings[] = "I'm a string!";
	bool boolean = true;
	printf("Numbers: %i\nBroken numbers: %f\nEven bigger broken numbers: %lf\nSingle characters: %c\nStrings: %s\nBooleans: %d\n\n", round_number, broken_number, bigger_broken_number, single_character, strings, boolean);

	//Operators
	int n = 10;
	printf("10 + 10 = %i\n", 10+10);
	printf("10 - 10 = %i\n", 10-10);
	printf("10 * 10 = %i\n", 10*10);
	printf("10 / 10 = %i\n", 10/10);
	printf("10 % 10 = %i\n", 10%10);
	printf("10++ = %i\n", ++n);
	n = 10;
	printf("10-- = %i\n", --n);

	//Utilizing break and continue
	int i = 1;
	for(i=1; i<=10;i++){
		if(i == 1){
			break;
		}
	}
	// Continue skips one iteration
	printf("Loop finished.I = %i\n", i);
	for(i=1; i<=10;i++){
		if(i%2 == 0){
			continue;
		}
	printf("Odd numbers between 1 and 10: %i\n",i);
	}

	//Pointers are like a variables' id
	int x = 10;
	int *x_pointer = &x;
	printf("X's value: %i, X's pointer: %p X's value from the pointer %i\n", x, x_pointer, *x_pointer);

	//Functions
	int *return_x_pointer (){
		return &x;
	}
	printf("X's pointer: %p\n", return_x_pointer());

	char your_name(char x[]){
		printf("Your name is %s.\n", x);	
	}
	your_name("Lucas");
	
	return 0;
}
