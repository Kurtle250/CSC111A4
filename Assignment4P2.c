/*
 *  Author:      Kurt Elliott
 *  Date:        Oct. 21, 2016
 *  Assignment:  Assignment 4 Part 2
 *  File name:   A4P2_2016_Template.c
 *  Description: Read a line of text from the user, capitalize the first
 *	             letter of each word and remove extra spaces from between words.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void read_and_capitalize();

int main(void){

	printf("Enter a line of text: ");

	fflush(stdout);

	read_and_capitalize();

	return EXIT_SUCCESS;
}


void read_and_capitalize(){
	char c;
	int x=0;
	int y=0;

	//Get the first character from the user
	c = getchar();

	//Loop to read characters until a newline (\n) is encountered
	while(c != '\n'){
		//Print out the current character
		//(Modify this section to produce the output required by the assignment)
		if ( isspace(c) ){
			if(x==0){
				printf(" ");//prints space
				x=1;
				y=0;
			}
		}
		else {
			x=0;

			if (y==0){
				printf("%c",toupper(c));//prints  first letter as capital
				y=1;
			}
			else{
				printf("%c",c);//continue printing sting
			}
		}
		//Get the next character from the user
		c = getchar();
	}
	printf("\n");
}
/* read_and_capitalize */
