#include <stdio.h>
#include <string.h>
#include <math.h>
#ifndef syira_dev_H
#define syira_dev_H


double operasiPengurangan(double angka1, double angka2){
	return angka1 - angka2;
}


double operasiSinus(double bilangan)
{
	double radian;
    radian = bilangan * M_PI /180;
    return sin(radian);
}


int hexatodeci(int decimal, int length, int digit)
{
   char hexa[20];
   decimal = 0;
   int i;

   printf("Masukkan bilangan heksadesimal: ");
   scanf("%s", hexa);

   length = strlen(hexa);

   for (i = 0; hexa[i] != NULL ; i++)
   {
      length--;
      if (hexa[i] >= 48 && hexa[i] <= 57)
      {
         digit = hexa[i] - 48;
      }
      else if (hexa[i] >= 97 && hexa[i] <= 102)
      {
         digit = hexa[i] - 97 + 10;
      }
      else if (hexa[i] >= 65 && hexa[i] <= 70)
      {
         digit = hexa[i] - 65 + 10;
      }
      decimal += digit * pow(16, length);
   }

   printf("%d", decimal);

   return 0;
}

int decitohexa(int decimal, int hasilbagi, int sisa)
{

    int i, j = 0;
    char hexadecimal[20];
 
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
    }
     //display integer into character
    	for (i = j; i >= 0; i--)
    	{
        printf("%c",hexadecimal[i]);
    	}
    	return 0;
}

int hexa()
{
	int pil;
	printf("1. hexadecimal ke decimal\n2. decimal ke hexadecimal");
	printf("\nmasukan pilihan: ");
	scanf("%d", &pil);
	switch(pil)
	{
		case 1:
			hexatodeci(decimal,length,digit);
			break;
		case 2:
			decitohexa(decimal,hasilbagi,sisa);
			break;
	}
	return 0;
}




#endif
