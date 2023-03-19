#ifndef AhmadFauzy_dev_h
#define AhmadFauzy_dev_h
#include <math.h>
#define delta 0.000001


double operasiPembagian(double bilangansatu, double bilangandua){
	return (bilangansatu / bilangandua);
}


double operasiLogaritma(double bilangansatu, double bilangandua){
	if (bilangandua <= 0 || bilangansatu <= 0) {
        printf("Invalid input\n");
        return 1;
    }
	 return log(bilangandua) / log(bilangansatu);
}

double operasiLogaritmaBasis10(double bilangansatu){
	if (bilangansatu <= 0) {
        printf("Invalid input\n");
        return 1;
    }

	 return log10(bilangansatu);
}




#endif
