#ifndef AhmadFauzy_dev_h
#define AhmadFauzy_dev_h
 


double operasiPembagian(double bilangansatu, double bilangandua){
	return (bilangansatu / bilangandua);
}


//modul turunan
#include <math.h>
#define delta 0.000001
double input(double *x){
	double i;
	printf("menacari nilai turunan dari fungsi x^3 + x^2 + x + 1\n");
	printf("masukan nilai x =");
	scanf ("%f",&i);
	*x = i;
	return *x;
}

double f(double x) {
  return x*x*x + x*x + x + 1;
}

double derivative(double x) {
	printf("haha1 %2f\n",x);
  return (f(x + delta) - f(x)) / delta;
}

void output(double x){
		printf("Turunan dari f(x) pada x = %lf adalah %lf\n", x, derivative(x));
}

//int main() {
//	double x,hasil;
//	x = input(&x);
//	hasil = derivative(x);
//	output(x);
//	return 0;
//}



double operasiLogaritma(double bilangansatu, double bilangandua){
	if (bilangandua <= 0 || bilangansatu <= 0) {
        printf("Invalid input\n");
        return 1;
    }

	 return log(bilangandua) / log(bilangansatu);
}



//konversi biner
int decimalToBinary(int *decimal)
{
    int binary;
    int i = 0;
    int j;
  
    binary = *decimal % 2;
    *decimal = *decimal / 2;
    return binary;
}

//int main()
//{
//    int decimal,bin[32],i,j;
//    i=0;
//    j=0;
//    
//    printf("masukan angka: ");
//    scanf("%d", &decimal);
//    while(decimal>0){
//    bin[i] = decimalToBinary(&decimal);
//    i++;
//	}
//	printf("Binar dari angka tersebut adalah: ");
//    for(j = i - 1; j >= 0; j--) {
//	printf("%d",bin[j]);
//	}


#endif
