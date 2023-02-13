#include <stdio.h>
#ifndef syira_dev_H
#define syira_dev_H

void inputpengurangan(int *A, int *B){
	printf("masukan bilangan pertama: ");
	scanf("%d", &*A);
	printf("masukan bilangan kedua: ");
	scanf("%d", &*B);
}

int pengurangan(int bil1, int bil2, int hasil){
	return hasil = bil1 - bil2;
}

void outputpengurangan(int bil1, int bil2, int hasil){
	printf("hasil dari %d - %d adalah: %d", bil1, bil2, hasil );
}

#endif
