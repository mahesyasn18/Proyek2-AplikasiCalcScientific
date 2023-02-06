#include <stdio.h>
#include <stdlib.h>
#include "header\mahesya_dev.h"
#include "header\AryaKusumah_dev.h"
#include "header\adinda_dev.h"
#include "header\Faisal_dev.h"
#include "header\AhmadFauzy_dev.h"
#include "header\syira_dev.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pilihan, input_1, input_2;
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
	if(pilihan==1){
		system("cls");
		pertambahan(&input_1, &input_2);
		hasil = proses(input_1, input_2, hasil);
		output(input_1,input_2,hasil);
	}else if(pilihan==2){
		system("cls");
		inputpengurangan(&input_1, &input_2);
		hasil = pengurangan(input_1, input_2, hasil);
		outputpengurangan(input_1,input_2,hasil);
	}else if(pilihan==3){
		system("cls");
		inputbilangan(&input_1, &input_2);
		hasil = perkalian(input_1, input_2);
		outputbilangan(input_1,input_2,hasil);
	}else if(pilihan==4){
		system("cls");
		inputPembagian(&input_1, &input_2);
		hasil = prosesPembagian(input_1, input_2);
		outputPembagian(input_1,input_2,hasil);
	}else if(pilihan==5){
		system("cls");
		inputPangkat(&input_1, &input_2);
		hasil = calculatepangkat(input_1, input_2,hasil);
		outputpangkat(input_1,input_2,hasil);
	}else if(pilihan==6){
		system("cls");
		input_1=inputAkar(input_1);
		hasil = calculateAkar(input_1);
		OutputAkar(input_1,hasil);
	}else{
		printf("Maaf Input yang anda masukkan tidak ada di menu\n");
	}


	return 0;
}

