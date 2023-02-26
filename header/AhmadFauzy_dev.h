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




#endif
