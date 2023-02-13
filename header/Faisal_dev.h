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

float calculatepersen(int x,int y){
    return (float)(x * 100) / y;
}

//operasi radian

double calculate_sin(double sudut) {
    return sin(sudut);
}


#endif


 


