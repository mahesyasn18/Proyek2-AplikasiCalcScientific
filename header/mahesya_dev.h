#ifndef mahesya_dev_H
#define mahesya_dev_H
#include<math.h>

int inputAkar(int input){
	printf("Masukkan Angka:");
	scanf("%d", &input);
	return input;
}

float akar(int input){
	return sqrt(input);
}
void ProsesAkar(int input, float hasil){
	printf("hasil akar %d adalah %2f",input, hasil );
}
#endif
