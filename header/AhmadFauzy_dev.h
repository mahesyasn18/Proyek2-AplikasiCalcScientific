#ifndef AhmadFauzy_dev_h
#define AhmadFauzy_dev_h
#include <math.h>
#define delta 0.000001


double operasiPembagian(double bilangansatu, double bilangandua){
	return (bilangansatu / bilangandua);
}



double operasiLogaritma(double bilangansatu, double bilangandua) {
    double HasilPembagian = bilangandua;
    double sisa;
    double Hasil = 0;

    if (bilangandua <= 0 || bilangansatu <= 0) {
        printf("Invalid input\n");
        return 0.0/0.0;
    } else if (bilangansatu == bilangandua) {
        return 1;
    } else {
        while (HasilPembagian >= bilangansatu) {
                HasilPembagian /= bilangansatu;
                Hasil += 1;
        }
        if(HasilPembagian != 1){
        	Hasil+=HasilPembagian/bilangansatu;
		}
    }

    return Hasil;
}


#endif
