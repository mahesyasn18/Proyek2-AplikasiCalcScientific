#ifndef Faisal_dev_H
#define Faisal_dev_H
#include <math.h>

//operasi pangkat
	
int calculatepangkat(int x,int y){
    int a,total=1;
     for(a=1;a<=y;a++){
        total=total*x;
    }
    return total;
}

//operasi persen

double operasipersen(double num){
	return num / 100.0;
}

#endif


 


