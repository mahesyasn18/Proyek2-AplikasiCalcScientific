#ifndef Faisal_dev_H
#define Faisal_dev_H
#include <math.h>

//operasi pangkat
	
double operasiPangkat(double bilangansatu,double bilangandua){
    double a,total=1;
     for(a=1;a<=bilangandua;a++){
        total=total*bilangansatu;
    }
    return total;
}

//operasi persen

double operasipersen(double bilangan){
	return bilangan / 100.0;
}

#endif


 


