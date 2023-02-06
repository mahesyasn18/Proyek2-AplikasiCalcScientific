#ifndef mahesya_dev_H
#define mahesya_dev_H
#include<math.h>

int inputAkar(int input){
	printf("Masukkan Angka:");
	scanf("%d", &input);
	return input;
}

float calculateAkar(int input){
	return sqrt(input);
}
void OutputAkar(int input, float hasil){
	printf("hasil akar %d adalah %g",input, hasil );
}
#endif
