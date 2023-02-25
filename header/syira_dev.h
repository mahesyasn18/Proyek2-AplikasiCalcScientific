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



#endif
