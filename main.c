#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "header\mahesya_dev.h"
#include "header\AryaKusumah_dev.h"
#include "header\adinda_dev.h"
#include "header\Faisal_dev.h"
#include "header\AhmadFauzy_dev.h"
#include "header\syira_dev.h"
#include <ctype.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	char inputan[100];
	float angka[100];
	int index_angka= 0;
	char oper[100];
	int index_operator= 0;
	printf("masukkan ekspresi: ");
	scanf("%s",&inputan);
	int i;
	for(i=0;i<strlen(inputan);i++){
		if (isdigit(inputan[i])) {
		char num[100];
	        int num_top = 0;
	            while (isdigit(inputan[i]) || inputan[i] == '.') {
	                num[num_top++] = inputan[i++];
	            }
	  		num[num_top++]='\0';
	        angka[++index_angka] = strtof(num,NULL);
	    	i--;
    	}
    	else {
            while (index_operator >= 1 && mencariPrioritas(oper[index_operator]) >= mencariPrioritas(inputan[i])) {
                double angka2 = angka[index_angka--];
                double angka1 = angka[index_angka--];
                char opera = oper[index_operator--];
                angka[++index_angka] = prosesPerhitungan(angka1, angka2, opera);
            }
            oper[++index_operator] = inputan[i];
		}
	}
	
	while (index_operator >= 1) {
	    double angka2 = angka[index_angka--];
	    double angka1 = angka[index_angka--];
	    char opera = oper[index_operator--];
	    angka[++index_angka] = prosesPerhitungan(angka1, angka2, opera);
	}
	
	printf("hasil: %g\n", angka[1]);
	
	return 0;
	




}


