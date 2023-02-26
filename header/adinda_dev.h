#include<stdio.h>
#include <math.h>
#ifndef adinda_dev_H
#define adinda_dev_H
#define PI 3.14159265358979323846


double operasiPerkalian(double bilangansatu, double bilangandua){
	return bilangansatu * bilangandua;
}

double operasiFaktorial(double angka){
	int i;
	double pembagi;
	
	pembagi=angka;
	if(angka<1){
		return (1);
	} else{
		for(i=1;i<pembagi;i++){
			angka=angka*i;
		}
		return angka;
	}
	
}

double operasiSinus(double angka){
	double result;
	result=sin(angka);
	return result;
}

double operasiCosinus(double angka){
	double result;
	result=cos(angka);
	return result;
}

double operasiTangen(double angka){
	double result;
	result=tan(angka);
	return result;
}

double konversi_fahrenheit(double angka){
	double result;
	result=(9.0/5.0 * angka) + 32;
	return result;
}

double konversi_kelvin(double angka){
	double result;
	result=angka + 273.15;
	return result;
}

float konversi_reamur(float angka){
	float result;
	result=angka * (4.0/5.0) ;
	return result;
}

#endif
