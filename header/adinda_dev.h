#include<stdio.h>
#include <math.h>
#ifndef adinda_dev_H
#define adinda_dev_H


int perkalian(int bilangansatu, int bilangandua){
	return bilangansatu * bilangandua;
}

int faktorial(int input1){
	int i, pembagi;
	
	pembagi=input1;
	for(i=1;i<pembagi;i++){
		input1=input1*i;
	}
	
	return input1;
}

float sinus(float input1){
	float result;
	result=sin(input1);
	return result;
}

float cosinus(float input1){
	float result;
	result=cos(input1);
	return result;
}

float tangen(float input1){
	float result;
	result=tan(input1);
	return result;
}

float konversi_fahrenheit(float input1){
	float result;
	
	result=(9.0/5.0 * input1) + 32;
	return result;
}

float konversi_kelvin(float input1){
	float result;
	
	result=input1 + 273.15;
	return result;
}

float konversi_reamur(float input1){
	float result;
	
	result=input1 * (4.0/5.0) ;
	return result;
}

#endif