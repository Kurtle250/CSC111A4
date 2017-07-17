/*
 ============================================================================
Name: Kurt Elliott
UVicID: V00877791
Date: 2016/10/21
Assignment: A4
File name: V00877791A4P1.c
Description: This program reads integers from the user and
converts each value to Roman numerals.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



void num2Romans(int num);


int main(void) {
	int convertionNum;

	printf("Enter a number between 1 and 4999:");//Prints input line "Enter a number between 1 and 4999:"

	fflush(stdout);
	scanf("%d", &convertionNum);//Calls input number from user and stores value in convertionNum

	num2Romans(convertionNum);//Calls num2Romans function with convertionNum as parameter in argument

	return EXIT_SUCCESS;
}



void num2Romans(int num)
{
	if(num >= 5000 || num<=0){
		printf("Invalid value entered. Program will exit.");
		return;// Exits program if invalid valuve's are entered
	}
	for(;(num/1000)>=1;num=num-1000){//Converts 1000's into Roman numeral M
			printf("M");
	}
	for(;(num/900)>=1;num=num-900){//Converts 900 into Roman numeral CM
			printf("CM");
	}
	 for(;(num/500)>=1;num=num-500){//Converts 500 into Roman numeral D
		printf("D");
	}
	for (;(num/400)>=1;num=num-400){//Converts 400 into Roman numeral IX
		printf("IX");
	}
	for (;(num/100)>=1;num=num-100){//Converts 100 into Roman numeral C
		printf("C");
	}
	for (;(num/90)>=1;num=num-90){//Converts 90 into CD Roman numeral
		printf("CD");
	}
	for (;(num/50)>=1;num=num-50){//Converts 50 into Roman numeral L
		printf("L");
	}
	for (;(num/40)>=1;num=num-40){//Converts 40 into Roman numeral XL
		printf("XL");
	}
	for (;(num/10)>=1;num=num-10){//Converts 10 into Roman numeral X
		printf("X");
	}
	for (;(num/9)>=1;num=num-9){// Converts 9 into Roman numeral IX
		printf("IX");
	}
	for (;(num/5)>=1;num=num-5){//Converts 5 into Roman numeral V
		printf("V");
	}
	for (;(num/4)>=1;num=num-4){//Converts 4 into Roman numeral IV
		printf("IV");
	}
	for (;(num/1)>=1;num=num-1){//Converts 1 into Roman numeral I
		printf("I");
	}


}
