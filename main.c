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


double prosesPerhitungan(double angka1, double angka2, char operator) {
    switch (operator) {
    	case '&':
            return operasiModulus(angka1, angka2);
        case '^':
            return operasiPangkat(angka1, angka2);
        case 'v':
            return operasiAkar(angka2, angka1);
        case '*':
            return operasiPerkalian(angka1, angka2);
        case '/':
            return operasiPembagian(angka1, angka2);
        case '+':
            return operasiPenjumlahan(angka1, angka2);
        case '-':
            return operasiPengurangan(angka1, angka2);
        default:
            printf("Operator Tidak Diketahui: %c", operator);
            exit(1);
    }
}

int mencariPrioritas(char operator) {
	if(operator == '(' ||operator == ')'){
		return 0;
	}else if(operator == '^'||operator == 'v'||operator == '&'){
		return 3;
	}else if(operator == '*' ||operator == '/' ){
		return 2;
	}else if(operator == '+' ||operator == '-'){
		 return 1;
	}else{
		printf("Operator Tidak Diketahui: %c", operator);
        exit(1);
	}
}

double prosesPerhitunganTrigonometri(double angka, char operator[]){
	if(strcmp(operator,"sin(")==0){
		return OperasiSinus(angka);
	}
	else if(strcmp(operator,"cos(")==0){
		return operasiCosinus(angka);
	}
	else if(strcmp(operator,"tan(")==0){
		return operasiTangen(angka);
	}
	else if(strcmp(operator,"asin(")==0){
		return operasiAsin(angka);
	}
	else if(strcmp(operator,"acos(")==0){
		return operasiAcos(angka);
	}
	else if(strcmp(operator,"atan(")==0){
		return operasiAtan(angka);
	}else{
		printf("Operator Tidak Diketahui: %s", operator);
        exit(1);
	}
}
double prosesPerhitunganLog(double angka1, double angka2, char operator[]){
	if(strcmp(operator,"log(")==0){
		return operasiLogaritma(angka2,angka1);
	}else{
		printf("Operator Tidak Diketahui: %c", operator);
        exit(1);
	}
}

double prosesSingleNum(double angka, char operator){
	if(operator=='!'){
		return operasiFaktorial(angka);
	}else if(operator=='%'){
		return operasipersen(angka);
	}else{
		printf("Operator Tidak Diketahui: %c", operator);
        exit(1);
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	char inputan[100];
	double angka[100];
	int index_angka= -1;
	char oper[100]; 
	int index_operator= -1;
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
	        angka[++index_angka] = strtod(num,NULL);
	    	i--;
    	}
		else if (inputan[i] == 's' || inputan[i] == 'c' || inputan[i] == 't'|| inputan[i] == 'a'){
            char operator_trigono[6];
            int j=0;
            char nomor[100];
            double bilangan;
            int top_no = 0;
            while(inputan[i]!=')'){
            	if(isdigit(inputan[i])||inputan[i]=='.'){
            		nomor[top_no++] = inputan[i++];
				}else {
				    operator_trigono[j++] = inputan[i++];
				    operator_trigono[6] = '\0';    
				}
				
			}
			nomor[top_no] = '\0';
			angka[++index_angka] = strtod(nomor, NULL);
			bilangan = angka[index_angka];
			
			angka[index_angka]=prosesPerhitunganTrigonometri(bilangan,operator_trigono);
		}
		else if (inputan[i] == 'l'){
            char operator_log[6];
            int j=0;
            char nomor[100];
            double bilangan, bilangan2;
            int top_no = 0;
            while(inputan[i]!=')'){
            	if(isdigit(inputan[i])||inputan[i]=='.'){
            		nomor[top_no++] = inputan[i++];
				}else {
				    operator_log[j++] = inputan[i++];
				    operator_log[6] = '\0';    
				}
				
			}
			nomor[top_no] = '\0';
			angka[++index_angka] = strtod(nomor, NULL);
			bilangan = angka[index_angka--];
			bilangan2 = angka[index_angka];
			angka[index_angka]=prosesPerhitunganLog(bilangan,bilangan2,operator_log);
		}else if (inputan[i] == '!') {
            oper[++index_operator] = inputan[i];
            double bilangan;
            bilangan = angka[index_angka];
            char opera = oper[index_operator--];
            angka[index_angka]=prosesSingleNum(bilangan, opera);
        }else if (inputan[i] == '%') {
            oper[++index_operator] = inputan[i];
            double bilangan;
            bilangan = angka[index_angka];
            char opera = oper[index_operator--];
            angka[index_angka]=prosesSingleNum(bilangan, opera);
        }
		else if (inputan[i] == '(') {
            oper[++index_operator] = inputan[i];
        }
		else if (inputan[i] == ')') {
            while (oper[index_operator] != '(') {
                double num2 = angka[index_angka--];
                double num1 = angka[index_angka--];
                char operator = oper[index_operator--];
                angka[++index_angka] = prosesPerhitungan(num1, num2, operator);
            }
            index_operator--;
        }else {
            while (index_operator >= 0 && mencariPrioritas(oper[index_operator]) >= mencariPrioritas(inputan[i])) {
                double angka2 = angka[index_angka--];
                double angka1 = angka[index_angka--];
                char opera = oper[index_operator--];
                angka[++index_angka] = prosesPerhitungan(angka1, angka2, opera);
            }
            oper[++index_operator] = inputan[i];
		}
	}
	
	while (index_operator >= 0) {
	    double angka2 = angka[index_angka--];
	    double angka1 = angka[index_angka--];
	    char opera = oper[index_operator--];
	    angka[++index_angka] = prosesPerhitungan(angka1, angka2, opera);
	}
	
	printf("hasil: %g\n", angka[0]);
	
	return 0;
	




}


