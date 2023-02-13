#include <stdio.h>
#ifndef syira_dev_H
#define syira_dev_H


int pengurangan(int bil1, int bil2){
	return bil1 - bil2;
}



#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
int x;
 
int decitohexa()
{
	//quotient = hasil bagi
	//remainder = sisa
    int decimal, quotient, remainder;
    int i, j = 0;
    char hexadecimal[100];
 
    printf("Enter decimal number: ");
    scanf("%d", &decimal);
    quotient = decimal;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimal[j++] = 48 + remainder;
        else
            hexadecimal[j++] = 55 + remainder;
        	quotient = quotient / 16;
    }
    // display integer into character
    	for (i = j; i >= 0; i--)
        printf("%c",hexadecimal[i]);
    	return 0;
}

   
int hexatodeci() {  
    int decimalNumber=0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hexadecimal[30];  
    int i, j, power=0, digit;  
   
    printf("Enter a Hexadecimal Number: ");  
    scanf("%s", hexadecimal);  
     
    /* Converting hexadecimal number to decimal number */
    for(i=strlen(hexadecimal)-1; i >= 0; i--) {
        /*search currect character in hexDigits array */
        for(j=0; j<16; j++){
            if(hexadecimal[i] == hexDigits[j]){
                decimalNumber += j*pow(16, power);
            }
        }
        power++;
    }  
  
    printf("Decimal Number : %ld", decimalNumber);  
   
    return 0;  
}



#endif
