#include "RomanNum.h"
#include<regex.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char* RomanNum(char x[], char y[]){
	char* Answ = malloc(24 * sizeof(char));	
	int CorrectFormat;
	regex_t reg;
	regcomp(&reg, "^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$", REG_EXTENDED);	

	CorrectFormat = regexec(&reg, x, 0, NULL, 0);
	if(CorrectFormat != 0){					//Its a NON-MATCH?!?!		
		printf("The Roman Numeral did not follow the correct input method, plz use all uppercase and follow the described rules in the README file\n");		
		exit(EXIT_FAILURE);
	}
	CorrectFormat = regexec(&reg, y, 0, NULL, 0);
	if(CorrectFormat != 0){					//Its a NON-MATCH?!?!		
		printf("The Roman Numeral did not follow the correct input method, plz use all uppercase and follow the described rules in the README file\n");		
		exit(EXIT_FAILURE);
	}

	strcpy (Answ,x);
	strcat (Answ,y);
	return Answ;

	
} 
