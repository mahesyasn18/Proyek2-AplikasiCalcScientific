#include<stdio.h>
#include <math.h>
#ifndef adinda_dev_H
#define adinda_dev_H
#define PI 3.14159265358979323846


double operasiPerkalian(double bilangansatu, double bilangandua){
	return bilangansatu * bilangandua;
}

double operasiFaktorial(double bilangan){
	int i;
	double pembagi;
	
	pembagi=bilangan;
	for(i=1;i<pembagi;i++){
		bilangan=bilangan*i;
	}
	
	return bilangan;
}

double operasiCosinus(double bilangan){
	double result;
	result=bilangan * M_PI /180;
	return cos(result);
}

double operasiTangen(double bilangan){
	double result;
	result=bilangan * M_PI /180;
	return tan(result);
}

double konversi_fahrenheit(double bilangan){
	double result;
	result=(9.0/5.0 * bilangan) + 32;
	return result;
}

double konversi_kelvin(double bilangan){
	double result;
	result=bilangan + 273.15;
	return result;
}

float konversi_reamur(float bilangan){
	float result;
	result=bilangan * (4.0/5.0) ;
	return result;
}

#endif
