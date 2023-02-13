#include <stdio.h>
#ifndef syira_dev_h
#define syira_dev_h

void input(int *A, int *B){
	printf("masukan bilangan pertama: ");
	scanf("%d", &*A);
	printf("masukan bilangan kedua: ");
	scanf("%d", &*B);
}

int pengurangan(int bil1, int bil2, int hasil){
	hasil = bil1 - bil2;
	return 0;
}

void output(int bil1, int bil2, int hasil){
	printf("hasil dari %d - %d adalah: %d", bil1, bil2, hasil );
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

int main(){
	printf("1. decimal to hexa\n2. hexa to decimal\nmasukan pilihan: ");
	scanf("%d",&x);
	switch(x){
	case 1:
	decitohexa();
	case 2:
	hexatodeci();
	}
	return 0;
}


#endif
