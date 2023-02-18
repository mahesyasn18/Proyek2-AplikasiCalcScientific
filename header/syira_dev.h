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
	int decimal, hasilbagi, sisa;
    int i, j = 0;
    char hexadecimal[100];
 
    printf("Enter decimal number: ");
    scanf("%d", &decimal);
    hasilbagi = decimal;
 
    while (hasilbagi != 0)
    {
        sisa = hasilbagi % 16;
        if (sisa < 10)
        {
            hexadecimal[j++] = 48 + sisa;
        }
        else
        {
            hexadecimal[j++] = 55 + sisa;
        }
        	hasilbagi = hasilbagi / 16;
        	hexadecimal[j] = hasilbagi;
    }
    // display integer into character
    	for (i = j; i >= 0; i--)
    	{
        printf("%c",hexadecimal[i]);
    	}
    	return 0;
}

   
int hexatodeci() {  
	char hexa[20];
	int decimal = 0, length, i, digit;

   printf("enter hexadecimal number: ");
   scanf("%s", hexa);

   length = strlen(hexa);

   for (i = 0; hexa[i] != '\0' ; i++)
   {
      length--;
      if (hexa[i] >= '0' && hexa[i] <= '9')
      {
         digit = hexa[i] - '0';
      }
      else if (hexa[i] >= 'a' && hexa[i] <= 'f')
      {
         digit = hexa[i] - 'a' + 10;
      }
      else if (hexa[i] >= 'A' && hexa[i] <= 'F')
      {
         digit = hexa[i] - 'A' + 10;
      }
      decimal += digit * pow(16, length);
   }

   printf("%d", decimal);

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
