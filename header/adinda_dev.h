#include<stdio.h>
#include <math.h>
#ifndef adinda_dev_H
#define adinda_dev_H
#define PI 3.14159265358979323846
#include "header\AhmadFauzy_dev.h"


double operasiPerkalian(double bilangansatu, double bilangandua){
	return bilangansatu * bilangandua;
}

double operasiFaktorial(double bilangan){
	int i;
	double pembagi;
	
	pembagi=bilangan;
	for(i=1;i<pembagi;i++){
		bilangan=operasiPerkalian(bilangan, (double)i);
	}
	
	return bilangan;
}

double sinus(double derajat){ // menghitung nilai sinus dari suatu sudut
	double radian=derajat*(PI/180); // inputan menggunakan satuan derajat sehigga perlu dikonversi terlebih dahulu menuju radian
	double jumlah=0.0; // untuk menghitung nilai jumlah semua sukunya
	double nilaipersuku=radian; // nilaipersuku adalah nilai yang dihasilkan pengoperasian per sukunya
	
	int n = 1; 
    while (nilaipersuku != 0.0) {
        jumlah += nilaipersuku;
        n += 2; // ditambahkan dengan 2 karena suku yg digunakan adalah suku ganjil sebab turunan ganjil merupakan sinus itu sendiri
        nilaipersuku = (-1.0) * nilaipersuku * radian * radian / ((n-1) * n); //menggunakan deret taylor
    }
    return jumlah;
}

double operasiCosinus(double bilangan){ // menghitung nilai cosinus dari suatu sudut
	double radian=derajat*(PI/180); // inputan menggunakan satuan derajat sehigga perlu dikonversi terlebih dahulu menuju radian
	double jumlah=0.0; // untuk menghitung nilai jumlah semua sukunya
	double nilaipersuku=1; // nilaipersuku adalah nilai yang dihasilkan pengoperasian per sukunya
	
	int n = 0; // dimulai dari nol karena yang digunakan suku genap, turunan genap untuk cosinus merupakan cosinus itu sendiri
    while (nilaipersuku != 0.0) {
        jumlah += nilaipersuku;
        n += 2;
        nilaipersuku = (-1.0) * nilaipersuku * radian * radian / ((n-1) * n);
    }
    return jumlah;
}

double operasiTangen(double bilangan){
	double result;
	result=operasiPembagian(sinus/operasiCosinus); //tangen merupakan hasil bagi sin dengan cos
	return (result);
}

double operasiCosecan(double bilangan){
	double result;
	result=operasiPembagian(1/sinus); // cosecan merupakan satu per dari sinus
	return (result);
}

double operasiSecan(double bilangan){
	double result;
	result=operasiPembagian(1/operasiCosinus); // secan merupakan satu per dari cosinus
	return (result);
}

double operasiCotangen(double bilangan){
	double result;
	result=operasiPembagian(1/operasiTangen); // cotangen merupakan satu per dari tangen
	return (result);
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
