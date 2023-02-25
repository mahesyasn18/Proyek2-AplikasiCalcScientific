#ifndef AryaKusumah_dev_H
#define AryaKusumah_dev_H
#include <math.h>

//operasi tambah
int proses(int a, int b){
	scanf("%d", &a);
	scanf("%d", &b);
	
	return a + b; 
}

//operasi modulus
int modulus (dividend, divisor, modulus){
    scanf("%d", &dividend);
    
    do{
    	scanf("%d", &y);
	} while (divisor == 0);
	
	modulus = dividend % divisor;
    
    return dividend % divisor;
}

//operasi oktal
 int proses (octal, decimal = 0, i = 0){
 	scanf("%d", &octal);

    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        i++;
        octal /= 10;
        
    return decimal;
	}
 }

#endif
