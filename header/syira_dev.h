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

#endif
