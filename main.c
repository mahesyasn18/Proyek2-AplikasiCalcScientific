#include <stdio.h>
#include <stdlib.h>
#include "header\mahesya_dev.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pilihan, input;
	float hasil;
	printf("Program Calculator Ilmiah\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("5. Pangkat\n");
	printf("6. Akar\n");
	printf("Silahkan Pilih Menu : ");
	scanf("%d", &pilihan);
	if(pilihan == 6){
		input = inputAkar(input);
		hasil = akar(input);
		ProsesAkar(input, hasil);
		
	}else{
		printf("Maaf input yang anda Masukan Belum Ada");
	}
	return 0;
}
