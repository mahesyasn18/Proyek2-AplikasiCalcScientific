#ifndef AryaKusumah_dev_H
#define AryaKusumah_dev_H
#include <math.h>

//operasi tambah
int proses(int a, int b){
	return a + b; 
}


#endif

//operasi modulus
int modulus (x, y){
    
    scanf("%d", &x);
    scanf("%d", &y);
    
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

